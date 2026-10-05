#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void insertNode(int data)  {
    
    // creating a new node and storing data into it 
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (front == nullptr) {
        front = rear = new_node;
        rear->next = front;
        // return;
    } else {
        new_node->next = front;
        rear->next = new_node;
        rear = new_node;
    }

}

void deque(int data) 
{
    if (front == nullptr) {
        cout << "Queue is empty";
        return;
    }

    if (front == rear) {
        delete front;
        front = rear = nullptr;
    } else {
        Node* temp = front;
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

void display() 
{
    if (front == nullptr) {
        cout << "Empty queue nothing to display";
        return;
    }

    Node* temp = front;
    do 
    {
        cout << temp->data <<" ";
        temp = temp->next;
    } while (temp != front);

    cout << endl;

}

int main() {

    int choice, value;

    do {
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cin >> choice;
        while(choice) {
            switch(choice) {
                case 1: 
            }
        }
    }

    return 0;
}