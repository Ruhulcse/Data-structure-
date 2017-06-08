#include<iostream>
using namespace std;
int Search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int arr[]={10,12,15,14,16,19,18,14,15,16,19,31};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=31;
    int poss=Search(arr,n,key);
    if(poss==-1)
        cout<<"not found"<<endl;
    else
        cout<<"found  "<<key<<endl;
    return 0;
}
