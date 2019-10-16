#include<stdio.h>
int main()
{
    int n[4]={4,1,6,5};
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        int min=i;
        for(j=i;j<4;j++)
        {
            if(n[j]<n[i])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=n[min];
            n[min]=n[i];
            n[i]=temp;
        }
    }
    for(i=0;i<4;i++)
    {
        printf("%d",n[i]);
    }

    return 0;
}
