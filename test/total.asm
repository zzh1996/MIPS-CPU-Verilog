.text
addi $t0,$zero,1
addiu $t0,$t0,1
add $t0,$t0,$t0
addu $t0,$t0,$t0
sub $t1,$zero,$t0
subu $t0,$t0,$t1
#t0=16
addi $t1,$zero,5
addi $t2,$zero,3
and $t1,$t2,$t1
#t1=1
andi $t2,$t2,5
#t2=1
addi $t3,$zero,3
addi $t4,$zero,5
nor $t5,$t3,$t4
#t5=-8
or $t4,$t3,$t4
#t4=7
ori $t3,$t3,5
#t3=7
addi $t6,$zero,3
addi $t7,$zero,5
xor $t7,$t7,$t6
#t7=6
xori $t6,$t6,5
#t6=6
addi $t8,$zero,0
sw $t0,0($t8)
sw $t1,4($t8)
sw $t2,8($t8)
sw $t3,12($t8)
sw $t4,16($t8)
sw $t5,20($t8)
sw $t6,24($t8)
sw $t7,28($t8)

addi $t8,$zero,-9
addi $t9,$zero,3
sll $t0,$t8,3
srl $t1,$t8,3
sra $t2,$t8,3
sllv $t3,$t8,$t9
srlv $t4,$t8,$t9
srav $t5,$t8,$t9
lui $t6,10

addi $t8,$zero,0
sw $t0,32($t8)
sw $t1,36($t8)
sw $t2,40($t8)
sw $t3,44($t8)
sw $t4,48($t8)
sw $t5,52($t8)
sw $t6,56($t8)

addi $t8,$zero,-5
addi $t9,$zero,5

slt $t0,$t8,$t9
slti $t1,$t8,5
sltu $t2,$t8,$t9
sltiu $t3,$t8,5

addi $t8,$zero,0
sw $t0,60($t8)
sw $t1,64($t8)
sw $t2,68($t8)
sw $t3,72($t8)

addi $t8,$zero,-5
addi $t9,$zero,5
addi $t0,$zero,0
beq $t8,$t8,j1
addi $t0,$t0,1
j1:
beq $t8,$t9,j2
addi $t0,$t0,2
j2: 
bne $t8,$t8,j3
addi $t0,$t0,4
j3:
bne $t8,$t9,j4
addi $t0,$t0,8
j4: 
bgtz $t8,j5
addi $t0,$t0,16
j5:
bgtz $zero,j6
addi $t0,$t0,32
j6: 
bgez $t8,j7
addi $t0,$t0,64
j7:
bgez $zero,j8
addi $t0,$t0,128
j8: 
bltz $t8,j9
addi $t0,$t0,256
j9:
bltz $zero,j10
addi $t0,$t0,512
j10: 
blez $t8,j11
addi $t0,$t0,1024
j11:
blez $zero,j12
addi $t0,$t0,2048
j12: 
j j13
addi $t0,$t0,4096
j13:
addi $t7,$zero,0
lw $t1,0($t7)
la $t1,j14
jr $t1
addi $t0,$t0,8192
j14:
la $t3,j15
sw $t3,76($t7)
lw $t3,76($t7)
addi $t1,$zero,0
jr $t3
addi $t0,$t0,16384
j15:
addi $t4,$zero,5
addi $t2,$zero,5
add $t3,$t2,$t2
beq $t2,$t4,j16
addi $t0,$t0,-32768
j16:
sw $t0,80($t7)
sw $t3,84($t7)

lw $t1,76($t7)
lw $t1,80($t7)
add $t2,$t1,1
sw $t2,88($t7)
#clear
sw $zero,76($t7)

#loadstore
addi $t0,$zero,1
addi $t1,$zero,2
addi $t2,$zero,3
addi $t3,$zero,4

sb $t0,100($zero)
sb $t1,101($zero)
sb $t2,102($zero)
sb $t3,103($zero)

lw $t4,100($zero)

sh $t4,104($zero)
sh $t4,106($zero)

lb $t5,100($zero)
lb $t6,101($zero)
lb $t7,102($zero)
lb $t8,103($zero)

lh $t9,100($zero)

addi $t0,$zero,254
sb $t0,101($zero)
lhu $t0,100($zero)
lh $t1,100($zero)
sw $t0,96($zero)
sw $t1,92($zero)

#hazard

#add add
addi $t1,$zero,5
add $t1,$t1,$t1
add $t1,$t1,$t1
addi $t2,$zero,0
add $t1,$t1,$t1
addi $t2,$zero,0
addi $t2,$zero,0
add $t1,$t1,$t1
#t1=80

#add bgtz
addi $t3,$zero,5
loop11: addi $t3,$t3,-4
bgtz $t3,loop11
#t3=-3
addi $t5,$zero,0
addi $t4,$zero,5
loop22: addi $t4,$t4,-2
addi $t5,$t5,10
bgtz $t4,loop22
#t5=30

#lw add
addi $t6,$zero,108
sw $t6,0($t6)
lw $t7,0($t6)
addi $t7,$t7,1
#t7=109
lw $t2,0($t6)
addi $t6,$t6,0
addi $t2,$t2,1
#t2=109

#lw bgtz
lw $t4,0($t6)
bgtz $t4,j33
addi $t4,$t4,1
j33:
#t4=108
lw $t8,0($t6)
addi $t6,$t6,0
bgtz $t8,j44
addi $t8,$t8,1
j44:
#t8=108
lw $t9,0($t6)
addi $t6,$t6,0
bgtz $t9,j55
addi $t9,$t9,1
j55:
#t9=108

addi $t6,$zero,128
sw $t1,0($t6)
sw $t2,4($t6)
sw $t3,8($t6)
sw $t4,12($t6)
sw $t5,16($t6)
sw $t7,20($t6)
sw $t8,24($t6)
sw $t9,28($t6)

      addi $t0, $zero,160        # load address of array
      addi $t5, $zero,20        # load address of size variable
      addi $t3, $zero,3
      addi $t4, $zero,3

      sw   $t3, 0($t0)      # F[0] = $t3
      sw   $t4, 4($t0)      # F[1] = $t4
      addi $t1, $t5, -2     # Counter for loop, will execute (size-2) times
floop: lw   $t3, 0($t0)      # Get value from array F[n] 
      lw   $t4, 4($t0)      # Get value from array F[n+1]
      add  $t2, $t3, $t4    # $t2 = F[n] + F[n+1]
      sw   $t2, 8($t0)      # Store F[n+2] = F[n] + F[n+1] in array
      addi $t0, $t0, 4      # increment address of Fib. number source
      addi $t1, $t1, -1     # decrement loop counter
      bgtz $t1, floop        # repeat if not finished yet.

addi $t0,$zero,0
out:
lw $t1,500($zero)
andi $t2,$t1,8
beq $t2,$zero,aaa
addi $t0,$t0,-2
wait:
lw $t1,500($zero)
bne $t1,$zero,wait
aaa:
andi $t2,$t1,4
beq $t2,$zero,bbb
addi $t0,$t0,2
wait2:
lw $t1,500($zero)
bne $t1,$zero,wait2
bbb:
srl $t3,$t0,2
sw $t3,508($zero)
lh $t4,0($t0)
lw $t1,496($zero)
beq $t1,$zero,ccc
addi $t4,$t0,0
ccc:
sw $t4,504($zero)
lw $t1,496($zero)
j out