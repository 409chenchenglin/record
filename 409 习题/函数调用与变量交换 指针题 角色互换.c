#include<stdio.h>
void swap1(int a,int b);
void swap2(int *p,int *q);
void swap3(int *p,int *q);
int main()
{
	int a=1,b=2; 
	int*p=&a;
	int*q=&b;
	swap1(a,b);
	printf("After calling swap1: a = %d, b = %d\n",a,b);
	a=1,b=2;
	swap2(&a,&b);
	printf("After calling swap2: a = %d, b = %d\n",a,b);
	a=1,b=2;
	swap3(&a,&b);
	printf("After calling swap3: a = %d, b = %d",a,b);
	return 0;
} 

void swap1(int a,int b){
	int temp;
	temp=b;
	b=a;
	a=temp;
}

void swap2(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

void swap3(int *p,int *q){
	int *t;
	t=p;
	p=q;
	q=t;
}
