#include <iostream>

class Stack
{
private:
    int size;
    int *stackArray;
    int top;

public:
    Stack(int stackSize)
    {
        size = stackSize;
        stackArray = new int[size];
        top = -1; // Initialize the top pointer to -1 (empty stack)
    }

    ~Stack()
    {
        delete[] stackArray;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void push(int item)
    {
        if (!isFull())
        {
            top++;
            stackArray[top] = item;
        }
        else
        {
            std::cout << "Stack is full. Cannot push item: " << item << std::endl;
        }
    }

    int pop()
    {
        if (!isEmpty())
        {
            int item = stackArray[top];
            top--;
            return item;
        }
        else
        {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return stackArray[top];
        }
        else
        {
            std::cout << "Stack is empty. No item to peek." << std::endl;
            return -1; // Return a sentinel value to indicate an empty stack
        }
    }

    void display()
    {
        if (!isEmpty())
        {
            std::cout << "Stack elements:" << std::endl;
            for (int i = top; i >= 0; i--)
            {
                std::cout << stackArray[i] << std::endl;
            }
        }
        else
        {
            std::cout << "Stack is empty." << std::endl;
        }
    }
};

int main()
{
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.display(); // Display the stack

    std::cout << "Top element: " << stack.peek() << std::endl; // Peek the top element

    std::cout << "Popped element: " << stack.pop() << std::endl; // Pop an element

    stack.display(); // Display the stack after popping

    stack.push(6); // Push a new element

    stack.display(); // Display the stack after pushing

    return 0;
}