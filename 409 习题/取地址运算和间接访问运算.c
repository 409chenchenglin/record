#include<stdio.h>
int main()
{
	int a=3;
	int*p;
	p=&a;
	printf("a = %d, *p = %d\n",a,*p);
	*p=10;
	printf("a = %d, *p = %d\n",a,*p);
	printf("Enter a: ");
	scanf("%d",&a);
	printf("a = %d, *p = %d\n",a,*p);
	a++;
	*p=*p+1;
	printf("a = %d, *p = %d\n",a,*p);
	return 0;
}
