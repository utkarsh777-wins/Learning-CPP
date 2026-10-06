#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void createNode(int data) 
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new_node;

}
int returnIdx(int val) 
{
    if (head == nullptr) {
        cout << "404 no data found\n";
        return -1;
    }

    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == val) {
            return count;
        }
        
        count++;
        temp = temp->next;
    }

    return -1;
}
void display() 
{
    if (head == nullptr) {
        cout << "404 data not found!!" << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    createNode(10);
    createNode(20);
    createNode(30);
    createNode(40);
    display();
    int val; cin >> val;
    int idx = returnIdx(val);
    cout << val << " exists at idx : " << idx << endl;

    return 0;

}