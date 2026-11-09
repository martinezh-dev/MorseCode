#pragma once
#include <iostream>

template <typename T>
class StackNode
{
private:
    T* value;
    StackNode<T>* next;
public:
    StackNode(T* val, StackNode<T>* newNext)
    {
        value = val;
        next = newNext;
    }
    ~StackNode()
    {
        T val = *value;
        delete value;
        std::cout << "deleting StackNode: "  << val << "\n\n";
        if(next != nullptr)
            delete next;
    }

    StackNode<T>* getNext()
    {
        return next;
    }
    void setNext(StackNode<T>* newNext)
    {
        next = newNext;
    }

    T* getVal()
    {
        return value;
    }
    void setVal(T* newVal)
    {
        value = newVal;
    }
};

template <typename T>
class Stack
{
private:
    StackNode<T>* head;
public:
    Stack()
    {
        head = nullptr;
    }
    ~Stack()
    {
        delete head;
        std::cout << "deleting stack" << "\n";
    }

    void push(T* val)
    {
        head = new StackNode<T>(val, head);
    }
    StackNode<T>* pop()
    {
        StackNode<T>* temp = head;
        head = head->getNext();

        temp->setNext(nullptr);
        return temp;
    }
};



