#include<stdio.h>
int main(){
	int s,t;
	scanf("%d%d",&s,&t);
	if(s<t){
		printf("No overspeed\n");
	}
	
	if(s>=t*1.1){
		if(s<t*1.5){
		printf("200.00\n");
	}else{
		printf("Revocation of the driving licens.\n");
		}
}
	return 0;
}

