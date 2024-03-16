#include<iostream>

class Node {
public: 
	int data{}; 
	Node* next{}; 
	Node(); 
	Node(int); 
};

Node::Node() {
	this->data = 0; 
	this->next = nullptr; 
}

Node::Node(int data) {
	this->data = data; 
	this->next = nullptr; 
}

class LinkedList {
public: 
	void insertNode(int);
	void insertAtBegin(int);
	void printList() const;
private: 
	Node* head{};
};

void LinkedList::insertNode(int data) {
	Node* newNode = new Node(data);
	if (head == nullptr) {
		head = newNode; 
		return; 
	}

	Node* temp = head; 
	while (temp->next != nullptr) {
		temp = temp->next; 
	}

	temp->next = newNode; 
}

void LinkedList::insertAtBegin(int data) {
	Node* temp = new Node(data); 
	temp->next = head; 
	head = temp; 
}

void LinkedList::printList() const {
	if (head == nullptr)
		return; 

	Node* temp = head;
	while (temp != nullptr) {
		std::cout << temp->data << " "; 
		temp = temp->next; 
	}
}

int main() {
	LinkedList list{}; 
	list.insertNode(3);
	list.insertNode(5);
	list.insertNode(7);
	list.insertNode(9);
	list.insertNode(11);

	list.insertAtBegin(55);

	list.printList(); 
	return 0; 
}



