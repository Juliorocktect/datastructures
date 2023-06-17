#pragma once
#include "node.hpp"
#include <vector>
class Tree{
    private:
        Node root;
        std::vector<Node*> nodes;
    public:
        Tree(int data);
};