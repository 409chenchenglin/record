#include<stdio.h>
int main()
{
	int input;
	double output;
	scanf("%d",&input);
	if(input<0){
//	为了不在每个if都打一个print 
//	所以当input小于0时 让output小于0 
//	不满足输出output的条件 
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
