#include<stdio.h>
void move(int a[],int n,int m);
int main()
{
	int i,n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	while(m>=n){
		m-=n;
	} 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	move(a,n,m);
	printf("After move: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}

void move(int a[],int n,int m)
{
	int b[n];
	int i,temp;
	for(i=0;i<n;i++)
	{
		temp=i+m;
		if(i+m>=n){
			temp=temp-n;
		}
		b[i]=a[temp];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	 } 
	
}
