#include<stdio.h>
//【问题描述】查找书籍:从键盘输入10本书的名称和定价并存入结构数组中，
//从中查找定价最高和最低的书的名称和定价，并输出。
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
