#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	Node* position2 = head;
	Node* position1 = head;
	int data1;
	int data2;
	for (int i=0; i<pos1; i++){
		position1 = position1->link;
		if (position1 == nullptr){
			return false;
		}
		data1 = position1->data;
	}
	for (int j=0; j<pos2; j++){
		position2 = position2->link;
		if (position2 == nullptr){
			return false;
		}
		data2 = position2->data;
	}

	position2->data = data1;
	position1->data = data2;
	return true;
}

bool LinkedList::find_and_delete(int target) {
	Node* currNode = head;
	while(currNode != nullptr) {
		if (currNode->data == target){
			delete currNode;
			return true;
		}
		currNode = currNode->link;
	}
	return false;
}
