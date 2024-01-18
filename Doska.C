#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=8;
	for(int i=0;i<9*n;i++){
		if(i%9==0){
                        i++;
                        printf("\n");
               	};
		if(i%2==0)
                	printf("#");
		else
                	printf("_");
	};
	printf("\n");
	return 0;
}

