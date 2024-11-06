#include<stdio.h>
void swap(int*a,int*b);
int main()
{
	int a=2019,b=324;
	scanf("%d%d",&a,&b);
	int cnt=0;
	do{
		cnt++;
		if(b>a){
		swap(&a,&b);
		}
		a=a-b;
	}while(a!=b);
	cnt++;
	printf("%d",cnt);
	return 0;
 } 

void swap(int*a,int*b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
