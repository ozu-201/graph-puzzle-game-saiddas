//
// Created by sd020691 on 12/14/2023.
//

#include "Main.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open file
    std::ifstream rfile;
    rfile.open("C:\\Users\\TEMP\\Desktop\\graph-puzzle-game-saiddas\\src\\dictionary.txt");

    // Measure the length and create variable for saving
    int length = 999999;
    char line[length];
    string lines = "";

    // Read the data and add to graph
    if(rfile.is_open()) {
        while (rfile.getline(line, 20)) {
            lines = lines + line + "\n";
            Node node = new Node(line);
            Graph.add(node);
        }
    }
    rfile.close();

    std::cout << lines;


    exit(0);
}