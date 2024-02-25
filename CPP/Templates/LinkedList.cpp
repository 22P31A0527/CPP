#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
public:
	T data;
	Node* next;
	Node(T val){
		data = val;
		next = NULL;
	}
};
template<class T>
class link{
public:
	Node<T>*head;
	Node<T>*tail;
	link(){
		head = NULL;
		tail = NULL;
	}
	void add(T val){
		if(head == NULL){
			head = tail = new Node<T>(val);
		}
		else{
			tail->next = new Node<T>(val);
			tail = tail->next;
		}
	}
	void delete(T val){
		Node<T> *temp = head;
		if(temp->data = val){
			Node *d=temp;
			temp=temp->next;
			free(d);
		}
		
	}
	void display(){
		Node<T> *temp = head;
		while(temp!=NULL){
			cout << temp -> data << " ";
			temp = temp->next;
		}
	}
};
int main(){
	link<int>l1;
	l1.add(2);
	l1.add(3);
	l1.delete(2);
	l1.display();
}
