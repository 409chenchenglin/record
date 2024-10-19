#include<stdio.h>
int main()
{
	int cnt=0,i=0,offset;
	char code[80];
	while((code[i]=getchar())!='\n'&&i<80){
		cnt++; 
		i++;
	}
	
	scanf("%d",&offset);
	while(offset>26){
		offset=offset-26;
	}
	
	for(i=0;i<cnt;i++){
		if((code[i]>='a')&&(code[i]<='z')){
			if(code[i]+offset>122){
				code[i]=97-1+(offset+code[i]-122);
			}else{
				code[i]=code[i]+offset;
			}
		}
		
		if((code[i]>='A')&&(code[i]<='Z')){
			if(code[i]+offset>90){
				code[i]=65-1+(code[i]+offset-90);
			}else{
				code[i]=code[i]+offset;
			}
		}
	
		printf("%c",code[i]);
		
	}
	
	return 0;
}
