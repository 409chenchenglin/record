#include<stdio.h>
int main()
{
	int i;
	int year,sum;
	int month=1,day;
	scanf("%d %d",&year,&sum);
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year % 4 == 0 && year%100!=0 || year%400==0){
		a[1]=29;
	}
	for(i=0;sum>a[i];i++){
		sum=sum-a[i];
		month++; 
	}
	printf("%d-%d-%d",year,month,sum);
	return 0;
}
