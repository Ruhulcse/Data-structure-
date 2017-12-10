#include<bits/stdc++.h>
using namespace std;
struct mysturct{
 char name[50];
 int age;
 double heigh;
};
int main()
{
    int x;
    struct mysturct s1;
    struct mysturct s2;
    s1.age=25;
    strcpy(s2.name,"ruhul");
    printf("%s",s2.name);
    printf("\n");
    printf("%d",s1.age);
    return 0;
}
