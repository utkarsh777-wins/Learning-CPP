#include <iostream>

using namespace std;

#define MAX 5

int myStack[MAX];
int top = -1;   // INITIALLY STACK IS EMPTY SO -1

// we will creqate our graud

bool isFull() 
{
    return top == MAX -1;
}

bool isEmpty()
{
    return top == -1;
}

void push(int value)
{
    if(isFull())  
    {
        cout  << "Jageh nhi hai(stack overflow) \n";
        return;
    }

    ++top;
    myStack[top] = value;

}

void pop() {
    if(isEmpty()) 
    {
        cout << "Bahut jageh hai(stack underflow) \n";
        return;
    }
    cout << "Popped value are- " << myStack[top] << endl;
    top--;
}

void peek() {
    if(isEmpty()) {
        cout << "khali hai bhai\n";
        return;
    }

    cout << "peeking: " << myStack[top] << endl;
}

void display() {
    for(int i= top; i>=0; i--) {
        cout << myStack[i] << endl;
    }
}
int main() {

    push(30);
    push(20);
    push(10);
    push(5);

    pop();
    peek();

    display();

    return 0;
}