#include<stdio.h>
#include<string.h>
void fsort(char *p[]);
int main()
{
	int i;
	char *colour[5]={"red","blue","yellow","green","black"};
	fsort(colour);
	for(i=0;i<5;i++)
	{
		printf("%s",colour[i]);
		if(i!=4){
			printf(" ");
		}
	}
	return 0;
}

//注释的是书上选择排序的做法 运行的步骤少一点 但不一定记得 想得到
//没注释的 是自己想的 运行的步骤多一点 但 容易理解并且容易想得到

void fsort(char *p[])
{
	int i,j;
	char*temp;
	for(i=0;i<5-1;i++)
	{
		int index=i; 
		for(j=i+1;j<5;j++)
		{
//			if(strcmp(p[index],p[j])>0)
			if(strcmp(p[i],p[j])>0)
			{
//				index=j;
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
//				temp=p[index];
//				p[index]=p[i];
//				p[i]=temp;
		}
	 } 
}
