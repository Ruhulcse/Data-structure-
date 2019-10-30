#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   struct node *link;
};
struct node *head;

void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;;
        temp=temp->link;
    }
}
void insert(int value)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else{
        struct node* t;
        t=head;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}
int main()
{
    head=NULL;
    insert(1);
    insert(4);
    print();
    return 0;
}

