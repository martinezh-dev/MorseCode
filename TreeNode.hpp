#pragma once
#include <iostream>

class TreeNode
{
private:
    TreeNode* branch1;
    TreeNode* branch2;
    char val;
public:
    TreeNode(TreeNode* b1, TreeNode* b2, char val);
    ~TreeNode();

    const char getVal();
    TreeNode* evaluate(bool condition);
    std::string toString();
};