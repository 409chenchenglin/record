#include<stdio.h>
int main(){
	int n,i;
	int t,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
//		t=i; �ɼ� 
		x=1;
//		while(t>=1) �ɼ�  ����x=1����һ��i �ж�ѭ������ 
		while(x<=i){
			printf("%d*%d=%d",x,i,x*i);
			if(x*i>9){
				printf("  ");
			}else{
				printf("   ");
			}
			t--;
			x++;
//			if(t==0){  
//				printf("\n"); �ɼ� ����ѭ������ ������� 
//			}
			
		}
			printf("\n");
	}
	return 0;
}
