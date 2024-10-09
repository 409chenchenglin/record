#include<stdio.h>
int main(){
	int i,n;
	int x,y,z;
	x=y=z=0;
	char ch;
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++){
		scanf("%c",&ch);
		if((ch==' ')||(ch=='\n')){
			x++;
		}else{
			if(ch>='0'&&ch<='9'){
				y++;
			}else{
				z++;
			}
		}
	}
	printf("blank=%d, digit=%d,other=%d",x,y,z);
	return 0;
} 

