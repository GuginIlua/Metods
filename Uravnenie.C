#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	printf("Укажите коэффициенты для уравнения вида: ах^2+bх+с=0\n");
	double x1;
	double x2;
	double d;
	double a;
	double b;
	double c;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
        scanf("%lf",&b);
	printf("c=");
        scanf("%lf",&c);
	d=b*b-4*a*c;
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Х-любоe\n");
				return 0;
			}
			printf("Решений нет\n");
			return 0;
		}
		x1=-c/b;
		printf("x=%f\n",x1);
		return 0;
	}
	if(d<0)
		printf("Решений нет\n");
	if(d==0){
		x1=(-b+sqrt(d))/(2*a);
		printf("x=%f\n",x1);
	};
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("x1=%f\n",x1);
		printf("x2=%f\n",x2);
	};
return 0;
}
