#include "node.hpp"

Node::Node(int data)
{
    this->data = data;
    this->right = nullptr;
    this->left = nullptr;
} 
void Node::addLeft(Node* left)
{
    this->left = left;
}
void Node::addRight(Node* right)
{
    this->right = right;
}
Node* Node::getLeft(){return left;}
Node* Node::getRight(){return right;}
int Node::getValue(){return data;}
int Node::getLeftData() {return left->getValue();}
int Node::getRightData(){return right->getValue();}