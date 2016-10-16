 .data
fibs: .word   0 : 20        # "array" of  20 words to contain fib values
size: .word  20             # size of "array" 
temp: .word 3 3
      .text
      la   $t0, fibs        # load address of array
      la   $t5, size        # load address of size variable
      lw   $t5, 0($t5)      # load array size
      la   $t3, temp	    # load 
      lw   $t3, 0($t3)
      la   $t4, temp
      lw   $t4, 4($t4)

      addi $t6,$t0,504

      sw   $t3, 0($t0)      # F[0] = $t3
      sw   $t4, 4($t0)      # F[1] = $t4
      addi $t1, $t5, -2     # Counter for loop, will execute (size-2) times
loop: lw   $t3, 0($t0)      # Get value from array F[n] 
      lw   $t4, 4($t0)      # Get value from array F[n+1]
      add  $t2, $t3, $t4    # $t2 = F[n] + F[n+1]
      sw   $t2, 8($t0)      # Store F[n+2] = F[n] + F[n+1] in array
      sw   $t2, 0($t6)
      addi $t0, $t0, 4      # increment address of Fib. number source
      addi $t1, $t1, -1     # decrement loop counter
      bgtz $t1, loop        # repeat if not finished yet.
out:  
	j out	
