#include<stdio.h>
#include<string.h> 
int main()
{
	const char *colour[]={"red","yellow","blue","black","green"};
	char ch;
	int i,c=0;
	scanf("%c",&ch);
	for(i=0;i<5;i++)
	{
//		����Ƚ� �����ַ����ַ�������ĸ ����һ���ַ�ʱ ���ֱ�ﶼ�� ���� д���ϵı�� 
//		if(ch==colour[i][0])
		if(ch==*colour[i])
		{
			printf("%s\n",colour[i]);
			c++;
		}
	}
	if(c==0)
	{
		printf("Not Found");
	}
	return 0;
}
