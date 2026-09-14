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
    
    new_node->data = n;
    new_node->next = NULL;

    // incase of first node 
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

int main() {

    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    display_all_nodes();

    return 0;

}