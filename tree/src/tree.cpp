#include "tree.hpp"

Tree::Tree(int data)
{
    this->root = new Node(data);
    nodes.push_back(&root);
}