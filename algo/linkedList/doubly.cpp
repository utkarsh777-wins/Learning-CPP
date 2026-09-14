    #include <iostream>

    using namespace std;

    struct Node {
        Node *prev;
        int data;
        Node *next;
    };

    Node* head = NULL;

    void insert_Node(int n) 
    {

        Node *new_node = new Node;
        new_node->data = n;
        new_node->next = NULL;

        // incase of first node 
        if(head == NULL) {
            new_node->prev = NULL;  // for head prev will be null
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;  
        }

        temp->next = new_node; 
        new_node->prev = temp;  // for other elements it'll be the last element 
        
    }

    /*
    10 20 30 40 50 
    rotate right by 2
    40 50 10 20 30
    */

    void rotateKth(int pos) {

        int count = 1;
        Node* temp = head;
        Node* newHead = NULL;
        while(temp->next!=NULL) {
            count++;
            if(count == pos) {
                newHead = temp->next;
                temp->next = NULL;
                break;
            }
        }
        while(newHead->next != NULL) {
            if(newHead->next = NULL) {
                newHead->next = head;
                head = newHead;
                newHead->prev = NULL;
                break;
            }
        }

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

        insert_Node(10);
        insert_Node(20);
        insert_Node(30);
        insert_Node(40);
        insert_Node(307);
        insert_Node(66);
        insert_Node(370);
        rotateKth(5);
        display_all_nodes();

        return 0;

    }