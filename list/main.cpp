#include <iostream>
#include "list.h"

int main() {
    List list(2, nullptr);
    List list1(4,&list);
    list.addNext(&list1);
    std::cout << list.getNext()->getData() << std::endl;
    return 0;
}
