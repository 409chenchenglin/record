#include<stdio.h>
int main()
{
	int input;
	double output;
	scanf("%d",&input);
	if(input<0){
//	Ϊ�˲���ÿ��if����һ��print 
//	���Ե�inputС��0ʱ ��outputС��0 
//	���������output������ 
		output=-65;
		printf("Invalid Value!");
	}else if(input<=50){
		output=input*0.53;
	}else{
		output=50*0.53+(input-50)*(0.05+0.53);
	}
	
	if(output>=0){
	printf("%.2lf",output);
	}
	return 0;
} 
