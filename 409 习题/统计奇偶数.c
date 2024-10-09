#include<stdio.h>
int main(){
	int i,n;
	int x;
	int odd,even;
	odd=0;
	even=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		if(i<n){
			scanf("%d ",&x);
		}else{
			scanf("%d",&x);
		}
		
		if(x%2==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("%d %d",odd,even);
}
