#ifndef DATASTRUCTURES_CPP_NODE_H
#define DATASTRUCTURES_CPP_NODE_H
#include <string>

using namespace  std;

class Node {
private:
    string data;
    Node* next;
public:
    explicit Node(string data);
    void setNext(Node* _next);
    Node* getNext();
    string getData();
};

#endif