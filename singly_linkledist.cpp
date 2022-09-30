#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
    
    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;
    cout<<head->next<<endl;
    cout<<second->next<<endl;
    cout<<third->next<<endl;

	return 0;
}