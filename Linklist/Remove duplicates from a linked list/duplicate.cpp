#include<bits/stdc++.h>
using namespace std;
//create node
struct node{
  int data;
  struct node* link;
};

struct node* head;

//print all the node
void print()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link;
    }
}
//add beginning of the list
void add(int value)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=head;
    head=temp;
}
//remove duplication from the link list
void duplicate(struct node*head)
{
    if(head==NULL)
        return;
    struct node* current=head;
    while(current->link!=NULL)
    {
        if(current->data==current->link->data)
        {
            struct node* nextnode=current->link->link;
            free(current->link);
            current->link=nextnode;
        }
        else{
            current=current->link;
        }
    }
}
//main driver 
int main()
{
   head=NULL;
   add(5);
   add(5);
   add(10);
   add(15);
   duplicate(head);
   print();
}
