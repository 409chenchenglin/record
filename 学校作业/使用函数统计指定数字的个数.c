#include<stdio.h>
#include<math.h>
int countdigit (int number,int digit );
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",countdigit (n,2) );
	return 0;
}

int countdigit (int number,int digit)
{
	int ret=0;
	if(number<0){
		number=-number;
	}
	int linshi,item;
	int cifang,cnt=1,weishu;
	linshi=item=number;
	while(linshi>9){
		linshi=linshi/10;
		cnt++;
	}
	while(item>0){
		cifang=pow(10,cnt-1);
		weishu=item/cifang;
		if(weishu==2){
			ret++;
		}
		item=item%cifang;
		cnt=cnt-1;
	}
	return ret;
}
