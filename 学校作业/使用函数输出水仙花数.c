#include<stdio.h>
#include<math.h>
int isnumber(int i);
int main()
{
	int i,m,n; 
	int is;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		is=0;
		is=isnumber(i);
		if(is==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
	
	

int isnumber(int i)
{
	int isnumber=0;
	int cnt=1,sum=0,weishu;
	int item=i;
	int linshi=i;
	int cifang;
	while(linshi>9){
		linshi=linshi/10;
		cnt++;
	}
	while(item>0){
		cifang=pow(10,cnt-1);
		weishu=item/cifang;
		item=item%cifang;
		sum=sum+pow(weishu,3);
		cnt=cnt-1;
	}
	if(i==sum){
		isnumber=1;
	}
	return isnumber;
}
