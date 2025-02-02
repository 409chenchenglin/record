#include <iostream>
#include<bits/stdc++.h>
using namespace std;

const int N=11;
int n,k;
int g[N][N];
string path;
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
bool s[N][N],edge[N][N][N][N];


bool dfs(int a,int b)
{
  if(a==n-1&&b==n-1)return path.size()==n*n-1;
  s[a][b]=true;
  for(int i=0;i<8;i++)
  {
    int x=a+dx[i];
    int y=b+dy[i];
    if(x<0||x>=n||y<0||y>=n)continue;
    if(s[x][y])continue;
    if(g[x][y]!=(g[a][b]+1)%k)continue;
    if(i%2!=0&&(edge[x][b][a][y]||edge[a][y][x][b]))continue;

    edge[a][b][x][y]=true;
    path+=i+'0';
    if(dfs(x,y)) return true;
    path.pop_back();
    edge[a][b][x][y]=false;
  }
  s[a][b]=false;
  return false;
}

int main()
{
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&g[i][j]);
    }
  }
  if(dfs(0,0))
  {
    cout<<path;
  }else{
    cout<<-1;
  }
  return 0;
}
