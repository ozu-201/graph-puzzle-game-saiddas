#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertFirst(Node *newNode) {
    if (isEmpty()) {
        tail = newNode;
    }
    newNode->setNext(head);
    head = newNode;
}

LinkedList::~LinkedList() {
    Node *tmp = head;
    Node *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}