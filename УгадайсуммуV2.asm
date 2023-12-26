j main
points:
add  $s2, $s0, $s1
addi $s3, $0, 68
beq $s2, $s3 eq
addi $s4, $0, 1
j finish
eq:
addi $s4, $0, 100
j finish
main:
lw $s0, 0 ($0)
lw $s1, 4 ($0)
j points
finish:
sw $s4, 8 ($0)
