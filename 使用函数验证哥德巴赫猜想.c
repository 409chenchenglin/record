#include<stdio.h>
int panduan(int number);
int main()
{
	int i,x1,x2;
	int cnt=0;
	for(i=6;i<=100;i=i+2){
		for(x1=2;x1<i;x1++){
			x2=i-x1;
			if(panduan(x1)&&panduan(x2)){
				cnt++;
				printf("%d=%d+%d ",i,x1,x2);
			if(cnt%5==0){
				printf("\n");
			}	
			break;
			}
		}
	}
	return 0; 	
}
int panduan(int number){
	int isprime=1;
	int i;
	if(number<=1){
		isprime=0;
	}
	for(i=2;i<number;i++){
		if(number%i==0){
			isprime=0;
			break;
		}
	}
	return isprime;
}
