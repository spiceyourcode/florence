#include <iostream>

class Queue {
private:
    int maxSize;
    int front;
    int rear;
    int* array;

public:
    Queue(int size) {
        maxSize = size;
        front = -1;
        rear = -1;
        array = new int[maxSize];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % maxSize == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue " << value << std::endl;
        } else {
            rear = (rear + 1) % maxSize;
            array[rear] = value;
            if (front == -1) {
                front = rear; // If the queue was empty, set front to the newly added element.
            }
        }
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
        } else {
            if (front == rear) {
                // If there's only one element in the queue, reset front and rear to -1.
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % maxSize;
            }
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. No element to peek." << std::endl;
            return -1; // You can return a special value to indicate an empty queue.
        }
        return array[front];
    }

    ~Queue() {
        delete[] array;
    }
};

int main() {
    Queue queue(5); // Creating a queue with a maximum size of 5.

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Front element: " << queue.peek() << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Front element after dequeuing: " << queue.peek() << std::endl;

    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    if (queue.isFull()) {
        std::cout << "Queue is full." << std::endl;
    }

    return 0;
}
