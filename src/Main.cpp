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
    string lines;
    char* newLine;
    std::ifstream rfile;
    rfile.open("C:\\Users\\TEMP\\Desktop\\graph-puzzle-game-saiddas\\src\\dictionary.txt");
    if(rfile.is_open())
    {
        while (rfile.getline(newLine, 20))
        {
            lines = lines + newLine;
        }
    }
    rfile.close();

    cout << lines << std::endl;

    exit(0);
}