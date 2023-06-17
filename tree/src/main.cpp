#include <iostream>
#include "node.hpp"
int main()
{
    Node first(5);
    Node second(12);
    Node third(3);
    first.addLeft(&second);
    first.addRight(&third);
    int valueSecond = first.getLeft()->getValue();
    std::cout << valueSecond << std::endl;
    return 0;
}