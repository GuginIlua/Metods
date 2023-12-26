j main
plus3:
addi $s1,$s1, 3
jr $ra
plus5:
addi $s1,$s1, 5
jr $ra
main:
jal plus5
jal plus3
jal plus5
sw $s1, 0x8($0)