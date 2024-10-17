#include<stdio.h>
void swap(int *a,int *b);
void bubble(int a[],int len);
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int number[n];
	bubble(number,sizeof(number)/sizeof(number[0]));

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

void bubble(int number[],int len){
	int i,j; 
for(i=0;i<len;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<len-1;i++){
		for(j=0;j<len-1-i;j++){
			if(number[j]>number[j+1]){
				swap(&number[j],&number[j+1]);
			}
		}
		
	} 
}
