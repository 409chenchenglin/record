#include<stdio.h>
struct birthday{
	int year;
	int month;
	int day;
};
struct record{
	char name;
//	struct birthday�ǽṹ������  �൱����� int 
// bady��������͵� ���� �൱��a 
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
//	��������������һ������ struct recod sord[n]; ֱ��ð����������� 
	struct record max;
	int j;
	for(i=0;i<n-1;i++){
		max=a[i];
		for(j=i;j<n-1;j++){
//			��� �·� ����С���������� 
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
