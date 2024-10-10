#include<stdio.h>
int main()
{
	int a,b,c;
	int max,mid,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		if(c>=a){
			max=c;
			mid=a;
			min=b;
		}else if(c>=b){
			max=a;
			mid=c;
			min=b;
		}else{
			max=a;
			mid=b;
			min=c;
		}
	}
	
	if(b>=a){
		if(c>=b){
			max=c;
			mid=b;
			min=a;
		}else if(c>=a){
			max=b;
			mid=c;
			min=a;
		}else{
			max=b;
			mid=a;
			min=c;
		}
	}
	
	printf("%d %d %d ",min,mid,max);
	
	return 0;
 } 
