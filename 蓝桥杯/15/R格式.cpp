#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

小蓝最近在研究一种浮点数的表示方法：R格式。对于一个大于0的浮点数d,可以用R格式的整数来表示。
给定一个转换参数n，将浮点数转换为R格式整数的做法是：
1.将浮点数乘以2的n次方;
2.四舍五入到最接近的整数。
  
输入格式
一行输入一个整数n和一个浮点数d,分别表示转换参数,和待转换的浮点数。
  
输出格式
输出一行表示答案：d用R格式表示出来的值。

样例输入
2 3.14
样例输出
13
样例说明
3.14×2×2=12.56,四舍五入后为13。




void cheng(vector<int>&a, int n)
{
  int t=0;
  for(size_t i=0;i<a.size();i++)
  {
    t+=a[i]*n;
    a[i]=t%10;
    t/=10;
  }
  if(t)
  {
    a.push_back(t);
  }
}

void add(vector<int>&a, int k, int n)
{
  int t=n;
  for(size_t i=k;i<a.size();i++)
  {
    t+=a[i];
    a[i]=t%10;
    t/=10;
  }
  if(t)
  {
    a.push_back(t);
  }
}

int main()
{
  int n;
  string d;
  cin>>n>>d;
  reverse(d.begin(),d.end());
  vector<int>D;
  int dot = d.find('.');
  for(auto c: d)
  {
    if(c!='.')
    {
      D.push_back(c-'0');
    }
  }
  while(n--)
  {
    cheng(D,2);
  }
  if(D[dot-1]>=5)
  {
    add(D,dot,1);
  }
  for(size_t i=D.size()-1;i>=dot;i--)
  {
    cout<<D[i];
  }
  cout<<endl;
  return 0;
}
