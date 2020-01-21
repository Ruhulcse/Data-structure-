#include<iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    int l=s.length();
    int result=0;
    int level=-1;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
        {
            level++;
        }
        else if(s[i]==')')
        {
            level--;
        }
        else if(level==k)
        {
            int x=s[i]-'0';
            i++;
            while(s[i]>=48&&s[i]<=57)
            {
                int d=s[i]-'0';
                x=x*10+d;
                i++;
            }
            i--;
            result+=x;
        }
    }
    cout<<result<<endl;
    return 0;
}
