lw $s0,0 ($0) #������ ������ ���������� � ������
lw $s1,4 ($0) #������ ������ ���������� � ������
addi $s7,$0,0 #������ ����� 0 � ������ ��� ����������� �������������
addi $s4,$0,1 #������ ����� 1 � ������ ��� ����������� �������������
beq $s0, $s4, bfinish1 #��������� ������ ���������� � ��������, ���� ��� ��� ������� � bfinish1
beq $s1, $s4, bfinish2 #��������� ������ ���������� � ��������, ���� ��� ��� ������� � bfinish2
beq $s0, $s7, bfinish3 #��������� ������ ���������� � ����, ���� ��� ��� ������� � bfinish3
beq $s1, $s7, bfinish3 #��������� ������ ���������� � ����, ���� ��� ��� ������� � bfinish3
add $s2,$s0,$s0  #����������� � ������ ���������� ������ ����������(��������� �� 2)
add $s6,$s4,$s4  #������� �������� �� ����� 2
beq $s1, $s6, finish #��������� ������ ���������� � ���������, ���� ��� ��� ������� � finish
repeat:
add $s2,$s0,$s2 #����������� � ���������� �������� ������ ����������
add $s6,$s6,$s4 #���������� �������� �� �������
beq $s1,$s6,finish #��������� ������ ���������� � ���������, ���� ��� ��� ������� � finish
j repeat #������� � repeat
bfinish1:
add $s2,$s7,$s1 #������ ������ ���������� � ������ ������
j finish #������� � finish
bfinish2:
add $s2,$s7,$s0 #������ ������ ���������� � ������ ������
j finish #������� � finish
bfinish3:
add $s2,$s7,$s7 #������ ���� � ������ ������
j finish #������� � finish
finish:
sw $s2,8,($0) #����� ������
