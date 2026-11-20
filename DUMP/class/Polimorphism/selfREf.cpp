// SelfRefrential Class
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node (int value) {
        data = value;
        next = NULL;
    }

    void printNode(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    first->next = second;
    second->next = third;
    cout << first->data << " ";
    cout << first->next->data << " ";
    cout << third->data << endl;
    
    Node* ptr;
    ptr->printNode(first);
    
    delete third;
    delete second;
    delete first;

    return 0;
}