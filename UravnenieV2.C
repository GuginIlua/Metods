#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int func(int sq,int code,double a,double b,double c,double* v1,double* v2){
        if(code==1){
                sq=23;
		return sq;
        }
        if(code==2){
                sq=0;
		return sq;
        }
        if(code==3){
		if(c==0){
			sq=1;
			*v1=0;
			return sq;
			};
                sq=1;
                *v1=-c/b;
		return sq;
        }
        sq=2;
        double d=b*b-4*a*c;
	if(d<0){
                sq=0;
		return sq;
	}
        if(d==0){
                *v1=(-b+sqrt(d))/(2*a);
                sq=1;
		return sq;
        };
        if(d>0){
                *v1=(-b+sqrt(d))/(2*a);
                *v2=(-b-sqrt(d))/(2*a);
                sq=2;
                return sq;
        };
	return sq;
}
int main(){
	printf("Укажите коэффициенты для уравнения вида: ах^2+bх+с=0\n");
	double x1;
	double x2;
	double a;
	double b;
	double c;
	int code=0;
	int sq;
	printf("a=");
	scanf("%lf",&a);
	printf("b=");
        scanf("%lf",&b);
	printf("c=");
        scanf("%lf",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				code=1;
				sq=func(sq,code,a,b,c,&x1,&x2);
				printf("Кол-во корней-бесконечно\n");
				return 0;
			}
			code=2;
			sq=func(sq,code,a,b,c,&x1,&x2);
			printf("Кол-во корней-%d\n",sq);
			return 0;
		}
		code=3;
		sq=func(sq,code,a,b,c,&x1,&x2);
		printf("Кол-во корней-%d\n",sq);
                printf("x=%f\n",x1);
		return 0;
	}
	sq=func(sq,code,a,b,c,&x1,&x2);
	if(sq==2){
		printf("Кол-во корней-%d\n",sq);
		printf("x1=%f\n",x1);
		printf("x2=%f\n",x2);
	}
	if(sq==1){
		printf("Кол-во корней-%d\n",sq);
                printf("x=%f\n",x1);
	}
	if(sq==0){
		printf("Кол-во корней-%d\n",sq);
	}
	if(sq==23)
		 printf("Кол-во корней-бесконечно\n");
return 0;
}
