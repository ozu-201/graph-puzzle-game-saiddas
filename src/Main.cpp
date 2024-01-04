#include "Main.h"
#include "Node.h"
#include "List/Graph/Graph.h"
#include "List/LinkedList.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Open file
    std::string line;
    std::ifstream rfile;
    rfile.open("C:\\Users\\TEMP\\Desktop\\graph-puzzle-game-saiddas\\src\\dictionary.txt");

    // Store the words in a list and count the length
    int length = 0;
    LinkedList *linkedList = new LinkedList();
    if (rfile.is_open()) {
        while (std::getline(rfile, line)) {
            Node *node = new Node(line);
            linkedList->insertFirst(node);
            length++;
        }
        rfile.close();
    }

    // Compare the nodes and store them in a graph
    Node *tmp = linkedList->getHead();
    list::Graph *graph = new list::Graph(length * length);
    while (tmp != nullptr) {
        Node *temp = linkedList->getHead();
        while (temp != nullptr) {
            if (tmp->lexicallyNeighbor(temp)) {
                graph->addEdge(tmp, temp);
            }

            temp = temp->getNext();
        }
        tmp = tmp->getNext();
    }
    exit(0);
}