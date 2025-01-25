#include <iostream>
using namespace std;

// 一个整数如果按从低位到高位的顺序，奇数位 (个位、百位、万位 ⋯⋯ ) 上的数字是奇数，偶数位 (十位、千位、十万位 ⋯⋯ ) 上的数字是偶数，我们就称之为 “好数”。

// 给定一个正整数 N，请计算从 1 到 N， 一共有多少个好数。

// 输入格式 一个整数 N

// 输出格式 一个整数代表答案。

int check(int n)
{
  int cnt=1;
  int ret=1;
  while(n){
    if((n%10)%2!=cnt%2){
      ret=0;
      break;
    }
    cnt++;
    n/=10;
  }
  return ret;
}

int main()
{
  int N;
  cin>>N;
  int cnt=0;
  for(int i=1;i<=N;i++){
    if(check(i)){
      cnt++;
    }
  }
  cout<<cnt;
  return 0;
}
