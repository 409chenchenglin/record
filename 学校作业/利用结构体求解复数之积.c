#include<stdio.h>
	struct complex{
		int real;
//	imaginary ÏÂÃæ¼ò³Æim 
		int im;
	}c1,c2;
int main()
{
	scanf("%d %d %d %d",&c1.real,&c1.im,&c2.real,&c2.im);
	struct complex c3;
	c3.real=c1.real*c2.real-c1.im*c2.im;
	c3.im=c1.real*c2.im+c2.real*c1.im;
	printf("(%d+%di) * (%d+%di) = %d + %di",c1.real,c1.im,c2.real,c2.im,c3.real,c3.im);
	return 0;
}
