#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	int b;
	printf("a=");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
		printf("Число чётное\n");
	else
		printf("Число нечётное\n");
	return 0;
}
