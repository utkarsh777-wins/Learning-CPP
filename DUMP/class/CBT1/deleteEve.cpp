#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) 
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = nullptr;
    
    if((*head) == nullptr) {
        *head = new_node;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new_node;

}
// void deleteEven(Node** head) {

//     if(*head == nullptr || (*head)->next == nullptr) return;

//     Node* prev = *head;
//     Node* temp = (*head)->next;
//     int count = 2;
    
//     while(temp != nullptr) {
//         if(count % 2 == 0)  {
//             Node* del = temp;
//             temp = prev;
//             temp->next = del->next;
//             delete del;
//         }

//         count++;
//         prev = temp;
//         temp = temp->next;
//     }
// }
void deleteEven(Node** head) {

    if(*head == nullptr || (*head)->next == nullptr) return;

    Node* curr = (*head);

    while (curr != nullptr && curr->next != nullptr) {
        Node* del = curr->next;
        curr->next = del->next;
        delete del;

        curr = curr->next;
    }
}
void display(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next; 
    }

    cout << endl;
}


int main() {

    Node* head  = nullptr;

    for (int i=1; i<7; i++) {
        insertNode(&head, i);
    }

    cout << "Pre-modification: " << endl;
    display(head);
    cout << "Post-modification: " << endl;
    deleteEven(&head);
    display(head);

    return 0;

}