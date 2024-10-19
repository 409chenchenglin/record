#include<stdio.h>
int main()
{
	int i;
	int lower,upper;
	double huashi;
	scanf("%d %d",&lower,&upper);
	if(lower>upper){
		printf("Invalid Value!\n");
	}else{
		for(i=lower;i<=upper;i++){
			huashi=5*(i-32)/9.0;
			printf("%d %.1lf\n",i,huashi);
		}
	}
	return 0;
}
