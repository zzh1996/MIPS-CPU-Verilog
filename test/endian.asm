.text
addi $t0,$zero,257
sw $t0,0($zero)
lb $t0,0($zero)
loop:
j loop