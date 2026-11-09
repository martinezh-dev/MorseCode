#pragma once
#include "Stack.hpp"
#include <iostream>

template <typename T>
class Qeue
{
private:
    StackNode<T>* head;
public:
    Qeue()
    {
        head = nullptr;
    }
    ~Qeue()
    {
        std::cout << "deleting Qeue" << std::endl;
        if(head != nullptr)
        {
            delete head;
        }
    }

    void append(T* value)
    {
        if(head == nullptr)
        {
            head = new StackNode<T>(value, nullptr);
        }else
        {
            StackNode<T>* cur = head;
            StackNode<T>* trail = nullptr;

            while(cur != nullptr)
            {
                trail = cur;
                cur = cur->getNext();
            }
            trail->setNext(new StackNode<T>(value, nullptr));
        }
    }

    StackNode<T>* pop()
    {
        StackNode<T>* temp = head;
        head = head->getNext();
        temp->setNext(nullptr);
        return temp;
    }

    T* peek()
    {
        return head->getVal();
    }
};
