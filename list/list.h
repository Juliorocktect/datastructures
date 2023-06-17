//
// Created by juli on 6/17/23.
//

#ifndef UNTITLED4_LIST_H
#define UNTITLED4_LIST_H
#include <iostream>
#include <vector>
class List{
private:
    int data;
    List* before;
    List* next;
public:
    List(int data,List* elementBefore);
    List* getBefore();
    List* getNext();
    int getData();
    void addNext(List* next);
};
#endif //UNTITLED4_LIST_H
