#include<stdio.h>
int isPrime(int n);
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(isPrime(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
 } 
 
 int isPrime(int n)
 {
 	int i,isprime;
 	isprime=1;
 	for(i=2;i<n;i++)
 	{
 		if(n%i==0){
 			isprime=0;
 			break;
		 }
	 }
	 return isprime;
 }
