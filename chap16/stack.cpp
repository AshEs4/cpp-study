#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack)
{
    std::cout<<"(stack:";
    if(std::size(stack)==0)
        std::cout<<"empty";
    else
    {
        for(int s: stack)
        {
            std::cout<<" "<<s;
        }
    }
    std::cout<<")\n";
}

void printPush(const std::vector<int>& stack,int v)
{
    std::cout<<"Push "<<v<<" ";
    printStack(stack);
}

void printPop(const std::vector<int>& stack)
{
    std::cout<<"Pop    ";
    printStack(stack);
}

int main()
{
    std::vector<int> stack{};
    std::cout<<"       (Stack: empty)\n";
    stack.push_back(1);
    printPush(stack,1);
    stack.push_back(2);
    printPush(stack,2);
    stack.push_back(3);
    printPush(stack,3);
    stack.pop_back();
    printPop(stack);
    stack.push_back(4);
    printPush(stack,4);
    stack.pop_back();
    printPop(stack);
    stack.pop_back();
    printPop(stack);
    stack.pop_back();
    printPop(stack);
    return 0;
}