#include<stdio.h>
int main()
{
	int letter,blank,digit,other; 
	letter=blank=digit=other=0;
	char ch;
	while(( ch = getchar() ) !='\n'){
		if((ch==' ')){
			blank++;
		}else if(ch>='0'&&ch<='9'){
				digit++;
		}else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
				letter++;
		}else {
			other++;
		}
		
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
	return 0;
} 
