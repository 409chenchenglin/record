#include<stdio.h>
int main()
{
	int n;
	int m,w,c;
	scanf("%d",&n);
	for(m=0;m<=n/3;m++){
		for(w=0;w<=n/2;w++){
			for(c=0;c<=n;c++){
				if(m*3+w*2+c==n){
					printf("%d,%d,%d\n",m,w,c);
				}
			}
		}
	}
	return 0;
 } 
