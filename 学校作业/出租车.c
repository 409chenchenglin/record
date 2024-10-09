#include<stdio.h>
#include<math.h>
int main()
{
	int s,t;
	double m,n;
	scanf("%lf%d",&n,&t);
	if(n<=3){
	m=10;
	}
	if(n>3&&n<=10){
		m=10+(n-3)*2.0;
	}
	if(n>10){
		m=24+(n-10)*3.0;
	}
	t=t/5;
	m=m*1.0+t*2;
//m= round(m);
s=m*1.0;
if(m-s>=0.5){
	s=s+1;
}
	printf("%d",s);
	return 0;
}
