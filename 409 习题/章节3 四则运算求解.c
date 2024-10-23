#include<stdio.h>
int main(){
	double a,b;
	double result;
	char op;
	scanf("%lf %c %lf",&a,&op,&b);
	switch(op){
		case'+':result=a+b;
		printf("%.2lf\n",result);
		break;
		case'-':result=a-b;
		printf("%.2lf\n",result);
		break;
		case'*':result=a*b;
		printf("%.2lf\n",result);
		break;
		case'/':
			if(b!=0){
		result=a/b;
		printf("%.2lf\n",result);
	}else{
		printf("Divisor can not be 0!") ;
	}
	break;
	default:
	printf("Unknown operator!") ;
	}
	return 0;
} 
