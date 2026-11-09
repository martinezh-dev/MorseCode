#pragma once
#include "TreeNode.hpp"
#include <iostream>

TreeNode::TreeNode(TreeNode* b1, TreeNode* b2, char val)
{
    branch1 = b1;
    branch2 = b2;
    this->val = val;
}

TreeNode::~TreeNode()
{
    delete branch1;
    delete branch2;
    std::cout << "destructor" << std::endl;
}

const char TreeNode::getVal()
{
    return val;
}

TreeNode* TreeNode::evaluate(bool condition)
{
    return (condition) ? branch1 : branch2;
}

std::string TreeNode::toString()
{
    return val + "";
}