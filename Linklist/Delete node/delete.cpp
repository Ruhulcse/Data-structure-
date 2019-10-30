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
void deletenode(int possition)
{
    if(possition==1)
    {
        struct node* temp;
        temp=head;
        head=temp->link;
        free(temp);
    }
    else{
        struct node* temp1;
        temp1=head;
        for(int i=1;i<=possition-2;i++)
        {
            temp1=temp1->link;
        }
        struct node* temp2;
        temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);
    }
}
int main()
{
    head=NULL;
    insertfirst(1);
    insertfirst(4);
    insertfirst(5);
    insertfirst(6);
    cout<<"Before delete node from link list"<<endl;
    print();
    deletenode(1);
    cout<<"After delete node from link list"<<endl;
    print();
    return 0;
}


