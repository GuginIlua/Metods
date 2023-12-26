#include <stdio.h>
void func1(int v1){
	v1=13;
}
void func2(int* v2){
	*v2=13;
}
int main(){
	int a=25;
	int b=32;
	int s=a+b;
	int* p1=&b;
	*p1=7;
	p1=&a;
	*p1=9;
	func1(s);
	printf("s=%d\n",s);
	func2(&s);
	printf("s=%d\n",s);
	return 0;
}
	
