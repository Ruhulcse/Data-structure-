#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
int graph[1001][1001];
int visited[1001];
void dfs(int src,int n,int cnt)
{
    visited[src]=cnt;
    for(int j=1;j<=n;j++)
    {
        if(graph[src][j]==1&& !visited[j])
        {
            dfs(j,n,cnt+1);
        }
    }
}
int main()
{
    IOS;
  int n,a,b;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      for(int j=1;j<n-1;j++)
      {
          visited[j]=0;
          graph[i][j]=0;
      }
  }
  for(int i=0;i<n-1;i++)
  {
      cin>>a>>b;

      graph[a][b]=1;
      graph[b][a]=1;
  }
  dfs(0,n,0);
  int q,mn=100000;
  cin>>q;
  int ans=-1;
  for(int i=1;i<=q;i++)
  {
      int gc;
      cin>>gc;
      if(visited[gc]<mn)
      {
          mn=visited[gc];
          ans=gc;
      }
      else
      {
          if(visited[gc]==mn&&ans>gc)
          {
              ans=gc;
          }
      }
  }
  cout<<ans<<endl;
}
