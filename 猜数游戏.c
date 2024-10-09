#include<stdio.h>
int main()
{
	int i,number,n;
	int c,t;
	int p=0;
	c=0;
	scanf("%d %d",&number,&n);
//	printf("\n");
	for(i=1;i<=n;i++)
{
	scanf("%d",&t);
	c++;
	
	if(t<0){
	printf("Game Over\n");
	p=1;
	break;}
		
		
	if(t>number){
		printf("Too big\n");
	}else if(t<number){
		printf("Too small\n");
	}else if(c==1){
		printf("Bingo\n");
		p=1;
		break;
	}else if(c<=3){
		printf("Luck You\n");
		p=1;
		break;
	}else if(c>3){
		printf("Good Guese\n");
		p=1;
		break;
	
//	
//	if(t==number&&c==1){
//		printf("Bingo\n");
//		p=1;
//		break;
//	}else if(t==number&&c<=3){
//		printf("Luck You\n");
//		p=1;
//		break;
//	}else if(t==number&&c>3){
//		printf("Good Guese\n");
//		p=1;
//		break;
//		
	}

	if(p==0){
		printf("Game Over\n");
	}
	
}
	return 0;
 } 
