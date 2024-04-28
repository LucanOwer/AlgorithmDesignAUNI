#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    LinkedList(int *array, int length);
    void insertPosition(int position, int newNumber);
    bool deletePosition(int position);
    int get(int position);
    int search(int target);
    void printList();
    ~LinkedList();
};
#endif