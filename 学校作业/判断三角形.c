#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	double j,k,l;
	double area,i;
	scanf("%d,%d %d,%d %d,%d",&a,&b,&c,&d,&e,&f);
	j=pow((a-c),2)+pow((b-d),2);
	j=pow(j,0.5);
	k=pow((a-e),2)+pow((b-f),2);
	k=pow(k,0.5);
	l=pow((c-e),2)+pow((d-f),2);
	l=pow(l,0.5);
	if(j+k>l&&j+l>k&&k+l>j) {
//	if(j+k>l){
//		if(j+l>k){
//			if(k+l>j){
//				s=(j+k+l);
//				i=s/2.0;
				i=(j+k+l)/2.0;
				area=i*(i-j)*(i-k)*(i-l);
				area=pow(area,0.5)*1.0;
				printf("%.2lf %.2lf",j+k+l,area);
			}else{
				printf("Impossible");
			}
	
	return 0;
}
