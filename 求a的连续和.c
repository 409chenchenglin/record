#include<stdio.h>
#include<math.h>
int main()
{
	int a,n;
	int i;
//	double x;
	double item,sum;
	sum=0;
	scanf("%d %d",&a,&n);
//	x=a;
item=0;
	for(i=1;i<=n;i++){
	item=item*10+a;
	sum=sum+item; 
}
//	{
//		if(i==1){
//			item=x;
//		}else{
//		item=a*pow(10,i-1)+x;
//	}
//		x=item;
//		sum=sum+item;
//	}
	printf("%.0lf\n",sum); 
	return 0;
 } 
