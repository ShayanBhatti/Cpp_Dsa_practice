#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int val){ // Corrected the typo here
			data=val;
			next= NULL;
			prev= NULL;
		}
};

void insertAtHead(Node*& head, int val){ // Corrected the function signature to pass head by reference
	Node* n=new Node(val);
	
	n->next=head;
	if(head != NULL)
		head->prev=n;
	
	head=n;
}
void insertAtTail(Node*& head, int val){
	if(head==NULL){
		insertAtHead(head,val);
		return;
	}
	Node* n= new Node(val);
	Node* temp=head;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	temp->next=n;
	n->prev=temp;
}


void display(Node* head){
	while(head!=NULL){
		cout<<head->data<<", ";
		head = head->next;
	}
}

int main(){
	Node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,3);
	insertAtTail(head,5);
	insertAtTail(head,7);
	insertAtTail(head,9);	
	display(head);
	return 0;
}
