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
void insertfirst(int value)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=head;
    head=temp;

}
int main()
{
    head=NULL;
    insertfirst(1);
    insertfirst(4);
    insertfirst(6);
    print();
    return 0;
}

