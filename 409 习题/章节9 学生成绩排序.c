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
	struct student test[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d%d%d",&test[i].number,&test[i].name,&test[i].math,&test[i].english,&test[i].pc);
		test[i].average=(test[i].math+test[i].english+test[i].pc)/3.0;
	}
	
	printf("num name average\n");
	
	struct student temp,max;
	for(i=0;i<n;i++)
	{
		max=test[i];
		int index=i;
//		26���Ѿ�����i���ֵ����Ϊ��� ����28��ѭ����i+1��ʼ �Ƚϵ�i�ͺ���ĵ�i+1��˭�� ����һ��ѭ�� 
		for(j=i+1;j<n;j++)
		{
			if(test[j].average>max.average)
			{
				max=test[j];
				index=j;
			}
		}
		temp=test[index];
		test[index]=test[i];
		test[i]=temp;
		printf("%d %s %.2lf\n",max.number,max.name,max.average);
	}
	return 0;
}
