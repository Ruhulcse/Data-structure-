#include<bits/stdc++.h>
using namespace std;
int sum=0;
void recursion(int value)
{
    if(value>0)
    {
        sum=sum+value;
        recursion(value-1);
    }

}
int main()
{
    recursion(5);
    cout<<sum<<endl;
    return 0;
}
