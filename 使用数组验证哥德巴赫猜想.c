#include<stdio.h>
int main()
{
	int i,n,m;
	int c,cnt=0;
	int sushu[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int length=sizeof(sushu)/sizeof(sushu[0]);
	for(i=6;i<=100;i=i+2){
		for(n=0;n<length;n++){
			m=i-sushu[n];
			for(c=0;c<length;c++){
				if(m==sushu[c]){
					cnt++;
					printf("%d=%d+%d ",i,sushu[n],sushu[c]);
					if(cnt%5==0){
						printf("\n");
				}	
//					}else{
//						printf(" ");
//					}
					n=length;
					break; 
				}
			}
		}
	}
	return 0;
}
