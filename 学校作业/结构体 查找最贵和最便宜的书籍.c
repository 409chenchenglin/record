#include<stdio.h>
#include <string.h> 
//【问题描述】查找书籍:从键盘输入10本书的名称和定价并存入结构数组中，
//从中查找定价最高和最低的书的名称和定价，并输出。
struct book{
	char title[5];
	double price;
	};
void shuzufuzhi(struct book*yuan,struct book*beifuzhi,int n);
int main()
{
	struct book books[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%s %lf",books[i].title,&books[i].price);
	}
	struct book max,min;
	shuzufuzhi(&(books[0]),&max,strlen(books[0].title));
	max.price=books[0].price;
	shuzufuzhi(&(books[0]),&min,strlen(books[0].title));
	min.price=books[0].price;
	for(i=1;i<10;i++){
		if(max.price<books[i].price){
			shuzufuzhi(&(books[i]),&max,strlen(books[i].title));
			max.price=books[i].price;
		}
		if(books[i].price<min.price){
			shuzufuzhi(&(books[i]),&min,strlen(books[i].title));
			min.price=books[i].price;
		}
	}
	printf("max:title:%s	price:%.2lf\n",max.title,max.price);
	printf("min:title:%s	price:%.2lf",min.title,min.price);
	return 0;
}
void shuzufuzhi(struct book*yuan,struct book*beifuzhi,int n){
	int i;
	for (i=0;i<n;i++){
    	beifuzhi->title[i]=yuan->title[i];
    }
    beifuzhi->title[i]='\0';
	
}
