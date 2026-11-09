#include <iostream>
#include <fstream>
#include "TreeNode.hpp"
#include "Stack.hpp"
#include "Qeue.hpp"

int main()
{
    /*
    std::string filename = "./source.txt";
    std::ifstream myFile = std::ifstream(filename);
    std::cout << "fstream created\n" << std::endl;

    if(!myFile.is_open())
    {
        myFile.open(filename, std::ifstream::in);
    }
    std::cout << "file opened\n" << std::endl;
    
    char firstline[myFile.gcount()];
    
    myFile.getline(firstline, 15);
    myFile.getline(firstline, 15);

    std::cout << firstline << std::endl;*/
    
    int* one = new int;
    int* two = new int;
    int* three = new int;

    *one = 1;
    *two = 2;
    *three = 3;

    Qeue<int>* myQeue = new Qeue<int>();

    myQeue->append(one);
    myQeue->append(two);
    myQeue->append(three);
    
    std::cout << "peeking: " << *(myQeue->peek()) << std::endl;
    StackNode<int>* temp = myQeue->pop();
    std::cout << *(temp->getVal()) << std::endl;
    delete temp;

    delete myQeue;
}