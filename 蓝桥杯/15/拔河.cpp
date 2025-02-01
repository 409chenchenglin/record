#include <iostream>
#include<bits/stdc++.h>

using namespace std;

multiset<long long>ans;
const int N=1010;
long long a[N]={0};
long long res=1e9;
int n;
int main()
{
  ans.insert(1e15);
  ans.insert(-1e15);
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    long long x;
    scanf("%lld",&x);
    a[i]=a[i-1]+x;
  }

  for(int l=1;l<=n;l++)
  {
    for(int r=1;r<=l-1;r++)
    {
      ans.insert(a[l-1]-a[r-1]);
    }
    for(int j=l;j<=n;j++)
    {
      long long sum=a[j]-a[l-1];
      auto it=ans.lower_bound(sum);
      res = min(res,*it-sum);
      it--;
      res=min(res,sum-*it);
    }
  }
  printf("%lld",res);
}
