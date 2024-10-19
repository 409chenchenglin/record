#include<stdio.h>
int main()
{
	int n;
	const char *month[]={"0","January", "February", "March", "April", "May", "June", 
                    "July", "August", "September", "October", "November", "December"};
	scanf("%d",&n);
	printf("%s",month[n]);
	return 0;
}
