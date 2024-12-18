#include<stdio.h>
#include<string.h>
int main()
{
	char*day[7]={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"};
	char ch[15];
	scanf("%s",ch);
	int i,ret;
	ret=-1; 
	for(i=0;i<7;i++){
		if(strcmp(day[i],ch)==0){
			ret=1;
			break;
		}
	}
	if(ret!=-1){
		printf("%d",i);
	}else{
		printf("%d",ret);
	}
	return 0;
 } 
