#include<stdio.h>
struct student{
	int number;
	char name[10];
	int math,english,pc;
	double average;
};

int main()
{
	int i,j,n;
	scanf("%d",&n);
	//下一行 定义一个结构数组 数组里每一个元素都是结构 
	struct student test[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d%d%d",&test[i].number,&test[i].name,&test[i].math,&test[i].english,&test[i].pc);
		test[i].average=(test[i].math+test[i].english+test[i].pc)/3.0;
	}
	
	printf("num name average\n");
	
	//注释的是书上的做法 运行的步骤少一点 但不一定记得 想得到
	//没注释的 是自己想的 运行的步骤多一点 但 容易理解并且容易想得到 
	
	struct student temp;
	for(i=0;i<n;i++)
	{
		int index;
		index=i;
//		26行已经将第i项的值假设为最大 所以28行循环从i+1开始 比较第i和后面的第i+1项谁大 减少一次循环 
		for(j=i+1;j<n;j++)
		{
			if(test[j].average>test[i].average)
		//if(test[j].average>test[index].average)
			{
				temp=test[j];
				test[j]=test[i];
				test[i]=temp;
//				index=j;
			}
		}
//		temp=test[index];
//		test[index]=test[i];
//		test[i]=temp;
		printf("%d %s %.2lf\n",test[i].number,test[i].name,test[i].average);
	}
	return 0;
}
