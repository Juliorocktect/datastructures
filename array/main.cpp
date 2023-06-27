#include <iostream>

int classes[3] = {1, 0, 0};

int current = 0;

void toStart()
{
    for (int i = 0; i < 2; i++)
    {
        classes[i] = 0;
    }
    current = 0;
}
void next()
{
    if (current == 2)
    {
        toStart();
        classes[current] = 1;
        classes[2] = 0;
    }
    else
    {
        current++;
        classes[current - 1] = 0;
        classes[current] = 1;
    }
}
void before()
{
    if (current == 0)
    {
        current = 2;
        classes[2] = 1;
        classes[0] = 0;
    }
    else
    {
        current--;
        classes[current] = 1;
        classes[current + 1] = 0;
    }
}
void printArray()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << classes[i] << std::endl;
    }
    std::cout << "--------\n";
}
int main()
{
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
    before();
    printArray();
}