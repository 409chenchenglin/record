#include<stdio.h>
//�����������������鼮:�Ӽ�������10��������ƺͶ��۲�����ṹ�����У�
//���в��Ҷ�����ߺ���͵�������ƺͶ��ۣ��������
struct book{
	char title;
	double price;
};
int main()
{
	struct book books[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%c %lf",&books[i].title,&books[i].price);
		getchar();
	}
	struct book max,min;
	max.title=books[0].title;
	max.price=books[0].price;
	min.title=books[0].title;
	min.price=books[0].price;
	for(i=1;i<10;i++){
		if(max.price<books[i].price){
			max.title=books[i].title;
			max.price=books[i].price;
		}
		if(books[i].price<min.price){
			min.title=books[i].title;
			min.price=books[i].price;
		}
	}
	printf("max:title:%c price:%.2lf\n",max.title,max.price);
	printf("min:title:%c price:%.2lf\n",min.title,min.price);
	return 0;
}
