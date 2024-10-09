#include<stdio.h>
#include<math.h>
int main()
{
	int x,t,i,n;
	int a;
	scanf("%d",&n);
	if(n<0){
		printf("fu ");
		n=-n;
	}
	x=n;
    for(i=1;x>=10;i++){
    	x=x/10;
    	
	}
	do{
		a=pow(10,i-1);
		t=n/a;
		n=n%a;
		i=i-1;
		switch(t){
		case(0): printf("ling"); break;
			
		case 1: printf("yi");break;
			
			
		case 2: printf("er");break;
			
			
		case 3: printf("san");break;
			
			
		case 4:	printf("si");break;
			
				
		case 5:	printf("wu");break;
		
			
		case 6:	printf("liu");break;	
		
			
		case 7:	printf("qi");break;	
			
			
		case 8: printf("ba");break;	
		    
		    
		case 9: printf("jiu");break;
	       
	    }
	        
		if(i>0){
			printf(" ");
		}		
}while(i>0);

	return 0;
}
