#include<stdio.h>
int main()
{
	int i;
	int year,month,day;
	int sum=0;
	scanf("%d %d %d",&year,&month,&day);
	int m[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<month-1;i++){
		sum=sum+m[i];
	}
	sum=sum+day;
		if((year%4==0&&year%100!=0)||(year%400==0)){
		if(month>2){
			sum=sum+1;
		}	
	}
	printf("%d",sum);
	return 0;
}
