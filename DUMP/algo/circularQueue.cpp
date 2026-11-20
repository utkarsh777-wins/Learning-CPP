// implementation of circular queue using array 

#include <iostream>
using namespace std;

#define SIZE 5

int myqueue[SIZE];
int front = -1;
int rear = -1;

bool isFull() {
    return ((rear+1) % SIZE == front);
}

bool isEmpty() {
    return (front == -1);
}

void enqueue(int value)
{
    if (isFull()) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear+1)%SIZE;
    }
    myqueue[rear] = value;
}

void dequeue()
{
    if(isEmpty()) {
        cout << "Dequeue is empty";
        return;
    }

    cout << "Dequeued element is ->" << myqueue[front] << endl;

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (isEmpty()) {
        cout << "Nothing to display";
        return;
    }

    cout << "Queue elements are: ";
    int temp = front;
    while(true) 
    {
        cout << myqueue[temp] << " ";
        if (temp == rear) break;
        temp = (temp + 1) % SIZE;
    }
    cout << endl;
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    // enqueue(60); // Overflow

    display();

    dequeue();
    dequeue();

    display();

    enqueue(70);
    enqueue(80);

    display();


    return 0;
}