#include<stdio.h>
void Insert(int*a,int num,int n);
void Delete(int*a,int index,int n);
void Modify(int*a,int index,int num,int n);
void Query(int*a,int num,int n);
int n;//全局变量 
int main()
{
	int i;
	int a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("[1] Insert\n");
	printf("[2] Delete\n");
	printf("[3] Modify\n");
	printf("[4] Query\n");
	printf("[other option] End\n");
	int x;
	scanf("%d",&x);
	int index,num;
	while(x>=1&&x<=4){
		if(x==1){
			scanf("%d",&num);
			Insert(a,num,n);
			n++;
		}else if(x==2){
			scanf("%d",&index);
			Delete(a,index,n);
		}else if(x==3){
			scanf("%d %d",&index,&num);
			Modify(a,index,num,n);
		}else if(x==4){
			scanf("%d",&num);
			Query(a,num,n);
		}
		scanf("%d",&x);
	}
	return 0;
 }
void Insert(int*a,int num,int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(num<=a[0]){
			int index;
			for(index=n;index>0;index--){
				a[index]=a[index-1];
			}
			a[0]=num;
			break;
		}
		if(num>=a[i]){
			if(i==n-1){
				a[i+1]=num; 
			}else{
				int index;
				for(index=n;index>i+1;index--){
					a[index]=a[index-1];
				}
				a[i+1]=num;
			}
			break;
		}
	}
	for(i=0;i<n+1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
} 


void Delete(int*a,int index,int n){
	int i;
	if(index<=n-1){
		for(i=index+1;i<n;i++){
			a[i-1]=a[i];
		}
		for(i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		n--;
	}else{
		printf("%d\n",-1);
	}
	
}


void Modify(int*a,int index,int num,int n){
	if(index<=n-1){
	 	a[index]=num;
	 	int i,j;
	 	for(i=0;i<n-1;i++){
	 		for(j=i+1;j<n;j++){
	 			if(a[j]<a[i]){
	 				int temp=a[j];
	 				a[j]=a[i];
	 				a[i]=temp;
				 }
			 }	
		 }
		 for(i=0;i<n;i++){
		 	printf("%d ",a[i]);
		 }
	}else{
		printf("-1\n");
	}
	 printf("\n");
 }
 
 
 void Query(int*a,int num,int n){
 	int i,ret=-1;
 	for(i=0;i<n;i++){
 		if(a[i]==num){
 			ret=i;
		 }
	 }
	 printf("%d\n",ret);
 }
