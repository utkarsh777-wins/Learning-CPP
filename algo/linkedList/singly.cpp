#include <iostream>
// do this for doubly

using namespace std;

struct Node {

    int data;
    Node *next;

};

Node *head = NULL;

void insertNode(int n) {

    Node *new_node = new Node;
    
    new_node->data = n;
    new_node->next = NULL;

    if(head == NULL) {
        head = new_node;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
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

// void revLL() {
//     Node* temp = head;
//     prev = NULL;
//     next = NULL;
//     next = temp.next;
//     while(temp.next != NULL) {

//     }

// }

void insertBeginning(int n) {
    Node *new_node = new Node;
    new_node->data = n;
    new_node->next = head;
    head = new_node;

}

void insertKth(int pos, int n) {
    Node *new_node = new Node;
    Node *temp = head;
    int count = 1;
    while(temp->next != NULL) {
        count++;
        if(count=pos-1) {
            new_node.next = temp.next;
            temp.next = newNode;
            return;
        }
    }

}

void delValueNod(int val) {
    Node *delete = head;
    Node *temp = head;

    while(temp->next != NULL) {
        if(temp.next->data == val) {
            delete = temp.next;
            temp.next = temp.next.next;
            free(delete);
            delete = NULL;
        }
    }


}

int main() {

    insertNode(1);
    insertNode(3);
    insertNode(5);
    insertNode(7);
    insertNode(9);
    insertNode(11);
    insertBeginning(66);
    insertKth(4, 4);
    display_all_nodes();

    return 0;

}