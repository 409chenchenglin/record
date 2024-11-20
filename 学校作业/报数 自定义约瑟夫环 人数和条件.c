#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	} 
	printf("Input n and m:\n");
	i=0;
	int j,l;
	j=l=0;
//	j是计算报数 1 2 ……n 1 2;
// l是统计出局的人数
	while(l<n)
	{
		if(i==n){
			i=0;
		}

		if(a[i]!=0){
		  	j++;
		  	
		  	if(j==m){
		  		printf("%d\n",a[i]);
		  		a[i]=0;
		  		j=0;
		  		l++;
	   		} 
		}
		i++;
	}
	return 0;
}
