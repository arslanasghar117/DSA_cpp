#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

class doubly_linkedlist
{
    public:
    node *first ,*last;

    doubly_linkedlist()
    {
        first=NULL;
        last=NULL;
    }

    void insert_first(int a)
    {
        if(first==NULL)
        {
            first= new node;
            first->data=a;
            first->next=NULL;
            first->prev=NULL;
            last=first;
            return;
        }
        else
        {
            node *ptr=new node;
            ptr->data=a;
            ptr->next=first;
            first->prev=ptr;
            ptr->prev=NULL;
            first=ptr;
        }
    }

    void insert_last(int a)
    {
        if(first==NULL)
        {
            first= new node;
            first->data=a;
            first->next=NULL;
            first->prev=NULL;
            last=first;
            return;
        }
        else
        {
            node *ptr=new node;
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=last;
            last->next=ptr;
            last=ptr;
        }
    }

    void remove_first()
    {
        if(first==NULL)
        {
            cout<<"empty";
            return;
        }
        if(first->next==NULL)
        {
            delete first;
            last=NULL;
            return;
        }
        else
        {
            node *ptr=first;
            first=first->next;
            first->prev=NULL;
            delete ptr;
        }
    }

    void remove_last()
    {
        if(first==NULL)
        {
            cout<<"empty";
            return;
        }
        if(last->prev==NULL)
        {
            delete last;
            first=NULL;
        }
        else
        {
            node *ptr=last;
            last=last->prev;
            last->next=NULL;
            delete ptr;
        }
    }

    void show_forward()
    {
        if(first==NULL)
        {
            cout<<"empty";
        }
        else{
            node *ptr=first;
            while(ptr->next!=NULL){
                cout<<ptr->data;
                ptr=ptr->next;
            }
            cout<<ptr->data;
        }
    }

    void show_backward()
    {
        if(first==NULL)
        {
            cout<<"empty";
        }
        else{
            node *ptr=last;
            while(ptr->prev!=NULL){
                cout<<ptr->data;
                ptr=ptr->prev;
            }
            cout<<ptr->data;
        }
    }

    void insert_loc(int a, int loc){
        node *ptr=first;
        int i=1;
        while(i<loc){
            ptr=ptr->next;
            i++;
        }

        node *temp=new node;
        temp->prev=ptr;
        temp->next=ptr->next;
        ptr->next->prev=temp;
        ptr->next=temp;
        temp->data=a;


    }
};

int main()
{
    doubly_linkedlist d;
    d.insert_first(9);
    d.insert_first(8);
    d.insert_first(7);
    d.insert_first(6);
    d.insert_first(5);
    d.insert_first(4);
    d.show_forward();
    d.show_backward();
    d.remove_first();
    d.show_forward();
    d.remove_last();
    d.show_forward();
    d.insert_loc(2,3);
    d.show_forward();
}