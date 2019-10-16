#include<stdio.h>
int main()
{
    int n[4]={4,1,6,5};
    int i,j,temp;
    for(i=0;i<4;i++)
    {
        j=i;
        while(j>0&&n[j]>n[j-1])
        {
            temp=n[j];
            n[j]=n[j-1];
            n[j-1]=temp;
            j--;
        }
    }
    for(i=0;i<4;i++)
    {
        printf("%d",n[i]);
    }
    printf("\n");
    return 0;
}
