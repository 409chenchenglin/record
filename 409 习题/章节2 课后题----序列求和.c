#include<stdio.h>
#include<math.h>
int main()
{
	int i,m,n;
	double item,sum=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		// i������ ���󸡵��� �ǵð�1�ĳ�1.0 
		item=pow(i,2)+1.0/i;
		sum=sum+item;
	}
	printf("%.6lf",sum);
	return 0;
}
