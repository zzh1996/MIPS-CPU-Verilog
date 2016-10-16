.text
addi $t0,$zero,0
loop: lw $t1,500($zero)
andi $t1,$t1,8
beq $t1,$zero,aaa
lw $t2,496($zero)
add $t0,$t0,$t2

bbb:lw $t1,500($zero)
andi $t1,$t1,8
bne $t1,$zero,bbb

aaa: sw $t0,504($zero)
j loop