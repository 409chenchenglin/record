#include<stdio.h>
int search(int list[],int n,int x);
int main()
{
	int i,x,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 int len=sizeof(a)/sizeof(a[0]);
	 scanf("%d",&x);
	 if(search(a,len,x)!=-1){
	 printf("index=%d",search(a,len,x));
	 }else{
	 	printf("Not found");
	 }
	return 0;
}

int search(int list[],int n,int x)
{
	int i,ret;
	ret=-1;
	for(i=0;i<n;i++)
	{
		if(x==list[i])
		{
			ret=i;
			break;
		}
	}
	return ret;
}
