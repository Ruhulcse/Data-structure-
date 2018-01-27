#include<bits/stdc++.h>
using namespace std;
vector<int>prm;
void sieve(int a,int b)
{
    int prime[b+1];
    int x=sqrt(b);
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(int i=4;i<=b;i+=2)
    {
        prime[i]=1;
    }
    for(int i=3;i<=x;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i+i;j<=b;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=b;i++)
    {
        if(prime[i]==0)
            prm.push_back(i);
    }
}
