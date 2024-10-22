#include<stdio.h>
int main()
{
	int one,two,five;
	int money;
	one=two=five=0;
	scanf("%d",&money);
	money=money-8;
	if(money>0){
		for(five=0;five<=money/5;five++){
			for(two=0;two<=money/2;two++){
				for(one=0;one<=money;one++){
					if(one+two*2+five*5==money){
						printf("%d %d %d %d\n",five+1,two+1,one+1,one+two+five+3);
					}
				}
			}
		}
	}else{
		printf("%d %d %d %d\n",five+1,two+1,one+1,one+two+five+3);
	}
	return 0;	
} 
