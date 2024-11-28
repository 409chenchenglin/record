#include<stdio.h>
struct birthday{
	int year;
	int month;
	int day;
};
struct record{
	char name;
//	struct birthday是结构体类型  相当于类比 int 
// bady是这个类型的 名字 相当于a 
	struct birthday bday; 
	char tel[20]; 
};
int main()
{
	int i,n;
	scanf("%d",&n);
	struct record a[n];
	for(i=0;i<n;i++){
		getchar();
		scanf("%c %d-%d-%d %s",&a[i].name,&a[i].bday.year,&a[i].bday.month,&a[i].bday.day,a[i].tel);
	}
	printf("\n");
//	好像不用设置另外一个变量 struct recod sord[n]; 直接冒泡排序就行了 
	struct record max;
	int j;
	for(i=0;i<n-1;i++){
		max=a[i];
		for(j=i;j<n-1;j++){
//			年份 月份 天数小就是岁数大 
			if(a[i].bday.year>a[j+1].bday.year
			||(a[i].bday.year==a[j+1].bday.year&&a[i].bday.month>a[j+1].bday.month)
			||(a[i].bday.year==a[j+1].bday.year&&a[i].bday.month==a[j+1].bday.month&&
			a[i].bday.day>a[j+1].bday.day)){
				max=a[j+1];
				a[j+1]=a[i];
				a[i]=max;
			}
		}
	} 
	for(i=0;i<n;i++){
		printf("%c %d-%d-%d %s\n",a[i].name,a[i].bday.year,a[i].bday.month,a[i].bday.day,a[i].tel);
	}
	
	return 0;
}
