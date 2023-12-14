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
    char line[20];
    string lines = "";

    std::ifstream rfile;
    rfile.open("C:\\Users\\TEMP\\Desktop\\graph-puzzle-game-saiddas\\src\\dictionary.txt");
    if(rfile.is_open()) {
        while (rfile.getline(line, 20)) {
            std::cout << line << std::endl;
            lines = lines + line;
        }
    }
    rfile.close();

    exit(0);
}