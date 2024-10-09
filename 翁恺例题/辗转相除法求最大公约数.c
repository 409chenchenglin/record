#include<stdio.h>
int main(){ 
	int a,b;
	int t;
	while(b>0){
		t=a%b;
		a=b;
		b=t
	}
//辗转相除法求最大公约数 当循环结束 b=0时，a就是最大公约数 
	return 0
}
