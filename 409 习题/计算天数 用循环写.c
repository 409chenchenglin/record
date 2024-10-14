#include<stdio.h>
int main()
{
	int i;
	int year,month,day;
	int sum=0;
	scanf("%d %d %d",&year,&month,&day);
	for(i=month-1;i>0;i--){
		if(i<=7){
			if(i%2!=0){
				sum=sum+31;
			}else if(i!=2){
				sum=sum+30;
			}else{
				sum=sum+28;
			}
		}
		
		if(i>=8){
			if(i%2!=0){
				sum=sum+30;
			}else{
				sum=sum+31;
			}
		}
	}
	i=month;
	sum=sum+day;
	if((year%4==0&&year%100!=0)||(year%400==0)){
		if(i>2){
			sum=sum+1;
		}	
	}
	printf("%d",sum);
	return 0;
} 
