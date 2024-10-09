#include<stdio.h>
int main()
{
	int i,n;
	int v;
	int one,two,three,four,five,six,seven,eight;
	one=two=three=four=five=six=seven=eight=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&v);
		switch(v){
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
			case 5:
				five++;
				break;
			case 6:
				six++;
				break;
			case 7:
				seven++;
				break;
			case 8:
				eight++;
				break;
			default:
				break;
				
		}
	}
	printf("\n");
	printf("1 %d\n",one);
	printf("2 %d\n",two);
	printf("3 %d\n",three);
	printf("4 %d\n",four);
	printf("5 %d\n",five);
	printf("6 %d\n",six);
	printf("7 %d\n",seven);
	printf("8 %d\n",eight);
	return 0;
}
