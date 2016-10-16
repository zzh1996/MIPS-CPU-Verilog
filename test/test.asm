.text
#addi,lw,sw,add,bgtz,j

#add add
addi $t1,$t0,5
add $t1,$t1,$t1
add $t1,$t1,$t1
addi $t2,$t0,0
add $t1,$t1,$t1
addi $t2,$t0,0
addi $t2,$t0,0
add $t1,$t1,$t1
#t1=80

#add bgtz
addi $t3,$t0,5
loop: addi $t3,$t3,-4
bgtz $t3,loop
#t3=-3
addi $t5,$t0,0
addi $t4,$t0,5
loop2: addi $t4,$t4,-2
addi $t5,$t5,10
bgtz $t4,loop2
#t5=30

#lw add
addi $t6,$t0,4
sw $t6,0($t6)
lw $t7,0($t6)
addi $t7,$t7,1
#t7=5
lw $t2,0($t6)
addi $t6,$t6,0
addi $t2,$t2,1
#t2=5

#lw bgtz
lw $t4,0($t6)
bgtz $t4,j3
addi $t4,$t4,1
j3:
#t4=4
lw $t8,0($t6)
addi $t6,$t6,0
bgtz $t8,j4
addi $t8,$t8,1
j4:
#t8=4
lw $t9,0($t6)
addi $t6,$t6,0
bgtz $t9,j5
addi $t9,$t9,1
j5:
#t9=4
out:
j out