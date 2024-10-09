#include<stdio.h>
int main(){
	int i,n;
	int x=0,y=0,z=0;
	char ch;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		scanf("%c",&ch);
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			x++;
		}else{
			if(ch>='0'&&ch<='9'){
				y++;
			}else{
				z++;
			}
		}
	}
	printf("letter=%d, digit=%d,other=%d",x,y,z);
	return 0;
} 
