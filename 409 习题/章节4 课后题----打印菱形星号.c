#include<stdio.h>
int main()
{
	int i,n;
	int j,k;
	scanf("%d",&n);
//	   ��ĿҪ��ո�����ζ�Ҫ
//	   �ɹ۲��֪ ÿһ�е�һ������ǰ�Ŀո���������һ�е���������Ϊ�����nֵ
//	   ���Կ��Ա�д���� ������ һ�δ�1��n һ�δ�n��һ
//	   ��ѭ������ո� ����������� Ȼ���ж��Ƿ�Ϊ��һ�����һ������ �Ǿͻ��� ���ǾͿո�
	    
	for(i=1;i<=n;i=i+2){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(k=i;k>0;k--){
			printf("*");
			if(k==1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	
	for(i=n-2;i>0;i=i-2){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(k=i;k>0;k--){
			printf("*");
			if(k==1){
				printf("\n");
			}else{
				printf(" ");
			}
		}
	}
	
	return 0;
}
