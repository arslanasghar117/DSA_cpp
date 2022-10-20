#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class linklist{
	public:
		node *first;
	linklist(){
		first=NULL;
	}

	void add_node(int a){
		node *ptr,*temp;
		if(first==NULL){
			first= new node;
			first->data=a;
			first->next=NULL;
		}
		else{
		ptr=first;
		while(ptr->next!=NULL)
			ptr=ptr->next;	
		temp=new node;
		temp->data=a;
		temp->next=NULL;
		ptr->next=temp;
	
		}
	}

	void print(){
		node *temp=first;
		if(first==NULL){
			cout<<"empty"<<endl;
		}
		else{
			while(temp->next!=NULL){
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			cout<<temp->data<<endl;
		}
		
	}

void del(int v){
	node *temp,*pre;
	temp=first;
	if(first==NULL){
		cout<<"empty No value"<<endl;
	}
	if(temp->data==v){
	first=first->next;
	delete temp;
	cout<<v<<"has been deleted"<<endl;
	return;
	}
	pre=temp;
	while(temp!=NULL){
		if(temp->data==v){
			pre->next=temp->next;
			delete temp;
			cout<<"value Has been deleted"<<endl;
			return;
		}
		pre=temp;
		temp=temp->next;
	}
}	
};

int main(){
	linklist l1;
	l1.add_node(1);
    l1.add_node(2);
	l1.add_node(3);
	l1.add_node(4);
	l1.add_node(5);
    l1.print();
    l1.del(3);
	l1.print();
	l1.del(2);
    l1.print();
    //l2.print();
    //l3.print();
}