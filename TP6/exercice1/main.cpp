#include "Stack.hpp"

int main() {
    Stack<double> stack;
    cout << "Is stack empty? " << boolalpha << stack.empty() << endl;
    stack.push(12);
    stack.push(20);
    stack.push(33.5);
    stack.push(40.3);
    stack.push(100);
    std::cout << "Stack size: " << stack.size() << endl;
    std::cout << "Stack top: " << stack.peek() << endl;
    stack.pop();
    std::cout << "Stack size after pop: " << stack.size() << endl;
    std::cout << "Stack top after pop: " << stack.peek() << endl;
    stack.pop();
    std::cout << "Stack size after pop: " << stack.size() << endl;
    std::cout << "Stack top after pop: " << stack.peek() << endl;
    stack.pop();
    stack.pop();
    std::cout << "Is stack empty? " << boolalpha << stack.empty() << endl;
    std::cout << "Stack size after pop: " << stack.size() << endl;
    std::cout << "Stack top after pop: " << stack.peek() << endl;
    stack.pop();
    std::cout << "Is stack empty? " << boolalpha << stack.empty() << endl;
   
    return 0;
}