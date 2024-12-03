//递归求阶乘和：输入一个整数n(n > 0且n ≤ 10)，求1!+2!+3!+…+n!。
//定义并调用函数fact(n)计算n!，函数类型是 double。试编写相应程序。
#include<stdio.h>
double fact(int n);
int main()
{
	int i,n;
	double total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total+=fact(i);
	}
	printf("%.2lf",total);
	return 0;
}

double fact(int n)
{
	double f;
	if(n==1||n==0){
		f=1;
	}else{
		f=n*fact(n-1); 
	}
	return f;
}
