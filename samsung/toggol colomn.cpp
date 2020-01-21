#include<iostream>
using namespace std;
int matrix[50][50],row,colomn,key,ans;
void toggol(int i)
{
    for(int j=0;j<row;j++)
    {
        if(matrix[j][i])
            matrix[j][i]=0;
        else
            matrix[j][i]=1;
    }
}
void solve(int key)
{
    if(key==0)
    {
        int tans=0;
        for(int i=0;i<row;i++)
        {
            int check=0;
            for(int j=0;j<colomn;j++)
            {
                if(matrix[i][j]==0)
                {
                    check=1;
                    break;
                }
            }
            if(check==0)
                tans++;
        }
        if(tans>ans)
        {
            ans=tans;
        }
        return;
    }
    for(int i=0;i<colomn;i++)
    {
        toggol(i);
        solve(key-1);
        toggol(i);
    }
}
int main()
{
    cin>>row>>colomn>>key;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colomn;j++)
        {
            cin>>matrix[i][j];
        }
    }
    solve(key);
    cout<<ans<<endl;
    return 0;
}
