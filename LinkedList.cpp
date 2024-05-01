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
	Node* currNode = head;
	Node* pos1Node = head;
	Node* pos2Node = head;
	int data1 = 0;
	int data2 = 0;
	while (currNode != nullptr){
		for (int i=0; i<pos1; i++){
			currNode->link = pos1Node;
			data1 = pos1Node->data;
			currNode = currNode->link;
		}
		for (int j=0; j<pos2;j++){
			currNode->link = pos2Node;
			data2 = pos2Node->data;
			currNode = currNode->link;
		}

		if (pos1Node->data != data2){
			pos1Node->data = data2;
		}

		if (pos2Node->data!=data1){
			pos2Node->data = data2;
		}	
		return true;
	}
	return false;
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
