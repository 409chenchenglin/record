#include<stdio.h>
#include<math.h>
int main(){
	int initial,day;
	double factor,result;
	scanf("%d %lf %d",&initial,&factor,&day);
	result=initial*pow((1+factor),day);
	printf("%.2lf",result);
		return 0;
}
