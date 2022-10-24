#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linkedlist{
    node *head, *tail;
    public:
    linkedlist(){
        head=NULL;
        tail=NULL;
    }

    void addNodeatFront(int v){
        node *newNode = new node;
        newNode->data=v;
        newNode->next=NULL;
        if(head==NULL){
            head= newNode;
            tail= newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
/*   see you after mids
    void addNodeatEnd(int v){
        node *newNode = new node;
        newNode->data=v;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=head;
            return;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
            return;
        }
    }

    void addNodeatPosition(int pos, int v){
        node *prev=new node;
        node *current=new node;
        current=head;
        node *newnode=new node;
        newnode->data=v;
        newnode->next=NULL;
        if(pos < 1){
            cout<<"position can not be less than one.";
        }
        else if(pos==1){
            newnode->next=head;
            head=newnode;
        }
        else{
            for(int i=1;i<pos;i++){
                prev=current;
                current=current->next;
                if(current==NULL){
                    cout<<"invalid position";       
                    return;
                }
            }
            prev->next=newnode;
            newnode->next=current;
        }
    }
*/
    void print(){
        node *current=head;
        while(current != NULL){
            cout<<current->data<<" ";
            current=current->next;
        }
    } 
};

int main(){
    linkedlist l1;
    l1.addNodeatFront(40);
//    l1.addNodeatEnd(90);
//    l1.addNodeatPosition(1,30);
    l1.print();
    return 0;
}