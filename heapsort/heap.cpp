///...........................Bismillahi-r-Rahmani-r-Rahim..................................///
///...................................*****.................................................///
///                  Mohammad Ruhul Amin                                                    ///
///                  Department of CSE                                                      ///
///                  College of business Science and Technology(CBST),Mymensingh.           ///
///...................................*****.................................................///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
void heapify(int arr[],int n, int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<n&&arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    IOS;
   int arr[]={20,7,1,54,10,15,90,23,77,25};
   int n=10;
   int i;
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   heapsort(arr,n);
   cout<<"After heapsort the value will be "<<endl;
    for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
