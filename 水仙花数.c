#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	int a,b;
	int t;
	int x,y;
	int d,c; 
	scanf("%d",&n);
	 a=pow(10,n-1);
	 b=pow(10,n)-1;
	 for(i=a;i<=b;i++){
	 	d=i;
	 	c=a;
		y=0;
	for(t=1;t<=n;t++){
		x=d/c;
		y=y+pow(x,n);
		d=d%c;
		c=c/10;
		if(y==i){
			printf("%d\n",y);
			break;
		}
	}
	 }
	
	
	return 0;
}
