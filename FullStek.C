#include <stdio.h>
int rec(int n){
	if(n>0){
		return n*rec(n+1);
	}
	else
		return 1;
}
int main(){
	int n=5;
	int res=rec(n);
return 0;
}
