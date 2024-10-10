#include<stdio.h>
int main()
{
	int n;
	double m,w,c;
	int r;
	scanf("%d",&n);
	for(m=0;m<=n/3.0;m++){
		for(w=0;w<=n/2.0;w++){
			for(c=0;c<=n;c++){
				if(m*3+w*2+c/2==n&&m+w+c==n){
					printf("%.0lf,%.0lf,%.0lf\n",m,w,c);
					r=1;
				}
			}
		}
	}
	if(r!=1){
		printf("None");
	}
	return 0;
 } 
