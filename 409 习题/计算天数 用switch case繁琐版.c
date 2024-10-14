#include<stdio.h>
int main()
{
	int n,y,r;
	int t=0; 
	scanf("%d %d %d",&n,&y,&r);
	if((n%4==0&&n%100!=0)||(n%400==0)){
		switch(y){
			case 12: t=t+30;
			case 11: t=t+31;
			case 10: t=t+30;
			case 9: t=t+31;
			case 8: t=t+31;
			case 7: t=t+30;
			case 6: t=t+31;
			case 5: t=t+30;
			case 4: t=t+31;
			case 3: t=t+29;
			case 2: t=t+31;
			case 1: break;
		}
		t=t+r;
	}else{
		switch(y){
			case 12: t=t+30;
			case 11: t=t+31;
			case 10: t=t+30;
			case 9: t=t+31;
			case 8: t=t+31;
			case 7: t=t+30;
			case 6: t=t+31;
			case 5: t=t+30;
			case 4: t=t+31;
			case 3: t=t+28;
			case 2: t=t+31;
			case 1: break;
	}
	t=t+r;
	}
	printf("%d",t);
	return 0;
}
