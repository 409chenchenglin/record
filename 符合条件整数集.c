#include<stdio.h>
int main()
{
	int a;
	int i,j,k;
	int cnt=0;
	printf("一个不超过6的数字");
	scanf("%d",&a);
	for(i=a;i<=a+3;i++){

		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
				if(i!=j && j!=k && i!=k){
					printf("%d",i*100+j*10+k);
					cnt=cnt+1;
					if(cnt==6){
						printf("\n");
						cnt=0;
					}else{
						printf(" "); 
					}
				}
			}
		}
	} 
	return 0;
}
