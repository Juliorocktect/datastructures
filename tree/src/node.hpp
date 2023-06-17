#pragma once

class Node
{
    private:
        int data;
        Node* left; 
        Node* right;
    public:
        Node(int data);
        void addLeft(Node* left);
        void addRight(Node* right);
        Node* getLeft();
        Node* getRight();
        int getValue();
        int getLeftData();
        int getRightData();
};