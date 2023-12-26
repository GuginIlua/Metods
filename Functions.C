#include<stdio.h>
int square_diff(int a, int b){
	return (a-b)*(a-b);
}

int square_sum(int a,int b){
	return (a+b)*(a+b);
}
int func1(int p1, int p2, int p3, int p4){
	int val1=square_diff(p1,p2);
	int val2=square_sum(p3,p4);
	int res=square_diff(val1,val2);
	return res;
}
int main(){
	int p1=8;
	int p2=6;
	int p3=3;
	int p4=5;
	int res=func1(p1,p2,p3,p4);
	printf("res=%d\n",res);
	return 0;
}
	
