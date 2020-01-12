#include<bits/stdc++.h>
using namespace std;
int graph[100][100];
int visit[100]={0};

void dfs(int graph[][100],int node,int visit[],int source)
{
    visit[source]=1;
    for(int i=1;i<=node;i++)
    {
        if(graph[source][i]==1&&visit[i]==0)
        {
            dfs(graph,node,visit,i);
        }
    }
}

int main()
{
   int node,edge;
   cin>>node>>edge;
   for(int i=1;i<=edge;i++)
   {
       int a,b;
       cin>>a>>b;
       graph[a][b]=1;
       graph[b][a]=1;
   }
   int cnt=0;
   for(int i=1;i<=node;i++)
   {
       if(visit[i]==0)
       {
           dfs(graph,node,visit,i);
           cnt++;
       }
   }
   cout<<cnt<<endl;
   return 0;
}
