#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
        printf("Укажите коэффициенты для полинома 2-го порядка\n");
        double a;
        double b;
        double c;
	double x0;
        double x;
        double x1;
        double x2;
        double t0;
        double t1;
        double t2;
        double t;
        double d0;
        double d1;
        double d2;
        double d;
        printf("a=");
        scanf("%lf",&a);
        printf("b=");
        scanf("%lf",&b);
        printf("c=");
        scanf("%lf",&c);
	x0=0;
	x1=1;
	x2=2;
	t0=a*x0*x0+b*x0+c;
	t1=a*x1*x1+b*x1+c;
	t2=a*x2*x2+b*x2+c;
	printf("t(0)=%f\n",t0);
        printf("t(1)=%f\n",t1);
        printf("t(2)=%f\n",t2);
	d0=t1-t0;
	d1=t2-t1;
	d=d1-d0;
	for(int i=0;i<98;i++){
		t=t2+d0+d;
		x=i+3;
		d0=t-t2;
		t2=t;
		printf("t(%f)=%f\n",x,t2);
	}
	return 0;
}
		
	
