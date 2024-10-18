#include<stdio.h>
int main()
{
	int cnt=0,i,offset;
	char code[80];
	code[0]=getchar();
	for(i=0;code[i]!='\n';i++){
		code[i+1]=getchar();
		cnt++; 
	}
	
	scanf("%d",&offset);
	while(offset>26){
		offset=offset-26;
	}
	
	for(i=0;i<cnt;i++){
		if((code[i]>='a')&&(code[i]<='z')){
			if(code[i]+offset>122){
				code[i]=97-1+(122-code[i]-offset);
			}else{
				code[i]=code[i]+offset;
			}
		}
		
		if((code[i]>='A')&&(code[i]<='Z')){
			if(code[i]+offset>90){
				code[i]=65-1+(90-code[i]-offset);
			}else{
				code[i]=code[i]+offset;
			}
		}
	
		printf("%c",code[i]);
		
	}
	
	return 0;
}
