//
// Created by juli on 6/17/23.
//
#include "list.h"

List::List(int data, List *elementBefore) {
    this->data = data;
    this->before = elementBefore;
    this->next = nullptr;
}
List* List::getBefore() {
    return before;
}
List* List::getNext() {
    return next;
}
int List::getData() {
    return data;
}
void List::addNext(List* next){
    this->next = next;
}

