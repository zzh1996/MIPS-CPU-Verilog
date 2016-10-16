.text
addi $t0,$zero,0

loop:
lw $t1,500($zero)
lw $t2,496($zero)
beq $t1,$zero,j4
andi $t3,$t1,8 #add
beq $t3,$zero,j1
add $t0,$t0,$t2
j1:
andi $t3,$t1,4 #sub
beq $t3,$zero,j2
sub $t0,$t0,$t2
j2:
andi $t3,$t1,2 #load to higher bits
beq $t3,$zero,j3
sll $t4,$t2,8
add $t0,$t0,$t4
j3:
lw $t1,500($zero)
bne $t1,$zero,j3
j4:
sw $t2,508($zero)
sw $t0,504($zero)
j loop