#include<stdio.h>
void search(int list[],int n,int x);
int main()
{
	int i,x,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 
//	 int len=sizeof(a)/sizeof(a[0]);

	scanf("%d",&x);
	search(a,n,x);
	return 0;
}

void search(int list[],int n,int x)
{
	int i,ret;
	int is_found=0;
	ret=0;
	for(i=0;i<n;i++)
	{
		if(x==list[i])
		{
			is_found=1;
			ret=i;
			break;
		}
	}
	
	if(is_found==1)
	{
		printf("index=%d",ret);
	}else{
		printf("Not found");
	}
	
}



