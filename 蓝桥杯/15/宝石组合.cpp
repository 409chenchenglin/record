#include<stdio.h>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int i,x,n;
	int h[100001]={0};
	vector<int>aws;
	scanf("%d",&n);
	int cnt,now;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		h[x]++;
	}
	for( i=100000;i>=1;i--){
		cnt=0,now=0;
		aws.clear();
		for(int j=i;j<=100000;j+=i){
			for(int k=1;k<=h[j]&&now<3;k++,now++){
				aws.push_back(j);
			}
			if(now>=3){
				for(int k=0;k<3;k++){
					printf("%d ",aws[k]);
				}
				printf("\n");
				return 0; 
			}
		}
	}
} 
