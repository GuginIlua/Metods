#include<stdio.h>
int fact_loop(int n){
	int res=1;
	for(int i=2;i<=n;i++){
		res=res*i;
	}
	return res;
}
int main(){
	int n=4;
	int res=fact_loop(n);
	printf("loop: %d!=%d\n",n,res);
	return 0;
}
