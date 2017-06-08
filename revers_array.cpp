#include<bits/stdc++.h>
using namespace std;
void rev(int ar[],int start,int End)
{
    int temp;
    while(start<End)
    {
        temp=ar[start];
        ar[start]=ar[End];
        ar[End]=temp;
        start++;
        End--;
    }
}
int main()
{
    int ar[]={1,3,5,7,9,11};
    int n=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }
      cout<<endl;
    rev(ar,0,5);

     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }

    return 0;
}
