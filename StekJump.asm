j main
double_diff:
lw $t0, 0x0  ($sp) 
lw $t1, 0x4  ($sp) 
sub $t2, $t0, $t1
add $v0, $t2, $t2
jr $ra
main:
addi $sp,$0, 0x200
lw $s0, 0x0  ($0) 
lw $s1, 0x4  ($0)
addi $sp, $sp, -8
sw $s0, 0x0  ($sp) 
sw $s1, 0x4  ($sp) 
jal double_diff
addi $sp, $sp 8
sw $v0, 0x8 ($0)