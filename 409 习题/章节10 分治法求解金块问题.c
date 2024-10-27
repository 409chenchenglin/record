#include<stdio.h>
int max(int a[],int i,int n);
int min(int a[],int i,int n);
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("max = %d\n",max(a,0,n-1));
	printf("min = %d",min(a,0,n-1));
	return 0;
}

int max(int a[],int i,int n)
{
	int k,result;
	int r1,r2;
	if(i==n){
		result=a[i];
//		return [i];
	}else{
		k=(i+n)/2;
		r1=max(a,i,k);
		r2=max(a,k+1,n);
		if(r1>r2){
			result=r1;
		}else{
			result=r2;
		}
	}
	return result;
}

int min(int a[],int i,int n)
{
	int k,result;
	int r1,r2;
	if(i==n){
		result=a[i];
//		return i;
	}else{
		k=(i+n)/2;
		r1=min(a,i,k);
		r2=min (a,k+1,n);
		if(r1>r2){
			result=r2;
		}else{
			result=r1;
		}
	}
	return result;
}
