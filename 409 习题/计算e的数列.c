#include<stdio.h>
int main()
{
	int fenzi=1,fenmu;
	int i,n;
	int j,fact;
	double item=1,sum=0;
	scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	fact=1;
	 	for(j=1;j<=i;j++){
	 		fact=fact*j;
		 }
		 fenmu=fact;
		 item=fenzi*1.0/fenmu;
		 sum=sum+item;
	 }
	 printf("%.4lf",sum);
	return 0;
}
