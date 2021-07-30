#include <iostream>
#include <stack>
#include <string>

void printStackElements(std::stack<std::string> stack)
{
    while (!stack.empty())
    {
        std::cout << "element in top stack is: " << stack.top() << std::endl;        
        stack.pop();
    }
}

int main()
{
    std::stack<std::string> elementsStack;
    int numElements;
    std::string element;

    std::cout << "Example program for stack management in C++" << std::endl;
    std::cout << "How many elements do you want insert?: ";
    std::cin >> numElements;

    for (int x = 0; x < numElements; x++)
    {
        std::cin >> element;
        elementsStack.push(element);
    }

    printStackElements(elementsStack);

    return 0;
}