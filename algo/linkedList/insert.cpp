#include <iostream>
// #include 

using namespace std;

struct Node {

    int data;
    Node *next;

};

Node *head = NULL;

void insert_Node(int n) 
{

    Node *new_node = new Node;
    new_node->data=n;
    new_node->next=NULL;

    if(head == NULL) {
        head = new_node;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;  // every time move to last
    }
    temp->next = new_node; // for adding new node
    
}

void display_all_nodes()
{
    cout << "The list contains the data entered:\n";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}

void insertAny(int pos, int val) 
{

    Node* new_node = new Node();
    new_node->data=val;

    if(pos == 0) {
        new_node->next = head;
        head = new_node;
        return;
    }

    Node* temp = head;
    int count = 0;

    while(temp != NULL && count < pos-1) {
        temp = temp->next;
        count++;
    }

    if(temp != NULL) {
        new_node->next = temp->next;
        temp->next = new_node;
    } else {
        cout << "Position out of range: " << endl;
        delete new_node; 
    }

}

int main() {

    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);

    int pos=0, val=0;
    cout << "Enter the position: ";
    cin >> pos;
    cout << endl;
    cout << "Enter the value: ";
    cin >> val;
    cout << endl;

    insertAny(pos, val);

    display_all_nodes();

    return 0;

}