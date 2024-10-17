#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int number[n];
	for(i=0;i<n;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(number[j]>number[j+1]){
				swap(&number[j],&number[j+1]);
			}
		}
		
	} 
	
	for(i=0;i<n;i++){
		printf("%d ",number[i]);
	}
	
	return 0;
}

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
