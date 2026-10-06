#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ==========================================
//  WRITE YOUR SOLUTION HERE
// ==========================================

// Example: Problem 2 (Insert at K-th Position)
ListNode* insertAt(ListNode* head, int val, int k) {

    ListNode dummy(0, head);  
    ListNode* temp = &dummy;

    for (int i=0; i<k && temp->next != nullptr;  i++) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        ListNode* new_node = new ListNode(val);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    return dummy.next;

}

// ==========================================
//  TEST HARNESS (DO NOT NEED TO MODIFY)
// ==========================================

// Converts a vector into a linked list
ListNode* buildList(const vector<int>& nums) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    for (int x : nums) {
        curr->next = new ListNode(x);
        curr = curr->next;
    }
    return dummy.next;
}

// Prints the linked list
void printList(ListNode* head) {
    if (!head) {
        cout << "nullptr\n";
        return;
    }
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << (curr->next ? " -> " : " -> nullptr\n");
        curr = curr->next;
    }
}

// Cleans up memory to prevent leaks
void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Test Case: insert val=3 at k=2 in [1, 2, 4]
    ListNode* head = buildList({1, 2, 4});

    cout << "Original: ";
    printList(head);

    head = insertAt(head, 3, 2);

    cout << "Result:   ";
    printList(head);

    freeList(head);
    return 0;
} 