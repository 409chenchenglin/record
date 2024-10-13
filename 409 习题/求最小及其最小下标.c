#include<stdio.h>
int main()
{
	int i,n;
	int x,min;
	scanf("%d",&n);
	int number[n];
	scanf("%d",&number[0]);
	min=number[0];
	x=0;
	for(i=1;i<n;i++){
		scanf("%d",&number[i]);
		if(number[i]<min){
			min=number[i];
			x=i;
		}
	}
	printf("%d %d\n",min,x);
	return 0;
}
