#include<stdio.h>
#include<math.h>
double funcos(double e,double x); 
int main()
{
	double e,x;
	scanf("%lf %lf",&e,&x);
	printf("%lf\n",funcos(e,x));
	return 0;	
} 

double funcos(double e,double x){
	int n,i=2;
	double fact=1,cos=0,item=1,zhengfu=1;
	double fenzi,fenmu;
	while(fabs(item)>=e){
		cos=cos+item;
		fact=1;
		zhengfu=-zhengfu;
		fenzi=pow(x,i);
		for(n=i;n>1;n--){
			fact=fact*n;
		}
		fenmu=fact;
		item=1.0*(zhengfu*fenzi)/fenmu;
		i=i+2;
	}
	cos=cos+item;
	return cos; 
}
