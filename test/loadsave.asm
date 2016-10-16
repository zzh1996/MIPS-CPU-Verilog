.text
addi $t0,$zero,1
addi $t1,$zero,2
addi $t2,$zero,3
addi $t3,$zero,4

sb $t0,0($zero)
sb $t1,1($zero)
sb $t2,2($zero)
sb $t3,3($zero)

lw $t4,0($zero)

sh $t4,4($zero)
sh $t4,6($zero)

lb $t5,0($zero)
lb $t6,1($zero)
lb $t7,2($zero)
lb $t8,3($zero)

lh $t9,0($zero)

addi $t0,$zero,254
sb $t0,1($zero)
lhu $t0,0($zero)
lh $t1,0($zero)

loop:
beq $zero,$zero,loop