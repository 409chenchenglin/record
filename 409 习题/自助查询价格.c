#include<stdio.h>
int main()
{
	int i,n=5;
	int t;
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		switch(t){
			case 1:
				printf("3.0\n");
				break;
			case 2:
				printf("2.5\n");
				break;
			case 3:
				printf("4.0\n");
				break;
			case 4:
				printf("3.5\n");
				break;
			case 0:
				printf("Thanks"); 
  				i=6;
				break;
			 default:
			 	printf("0.0");
		}
	}
	return 0;
}
