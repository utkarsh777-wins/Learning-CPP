#include <iostream>
#include <vector>

using namespace std;

/*
default constructor
constructer overloading 
parametrized constructor
*/
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// ==========================================
//  WRITE YOUR SOLUTIONS HERE
// ==========================================

// Problem 3: Delete by Value
// Remove all nodes equal to 'val' and free their memory.
ListNode* removeElements(ListNode* head, int val) {
    // TODO: Write your logic here
    return head;
}

// Problem 4: Find the Middle Node (Tortoise & Hare)
// Return the middle node (or second middle if even length).
ListNode* middleNode(ListNode* head) {
    // TODO: Write your logic here
    return head;
}

// Problem 5: In-Place Reversal
// Reverse the list pointers in-place with O(1) extra space.
ListNode* reverseList(ListNode* head) {
    // TODO: Write your logic here
    return head;
}

// Problem 6: Remove N-th Node From End of List
// Remove the n-th node from the end in one pass.
ListNode* removeNthFromEnd(ListNode* head, int n) {
    // TODO: Write your logic here
    return head;
}

// ==========================================
//  HELPERS & MEMORY CLEANUP
// ==========================================

ListNode* buildList(const vector<int>& nums) {
    ListNode dummy(0);
    ListNode* curr = &dummy;
    for (int x : nums) {
        curr->next = new ListNode(x);
        curr = curr->next;
    }
    return dummy.next;
}

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

void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// ==========================================
//  TEST RUNNER
// ==========================================

int main() {
    cout << "=== Test Problem 3: Remove Elements (remove 6) ===\n";
    ListNode* t3 = buildList({1, 2, 6, 3, 4, 5, 6});
    cout << "Original: "; printList(t3);
    t3 = removeElements(t3, 6);
    cout << "Result:   "; printList(t3);
    freeList(t3);

    cout << "\n=== Test Problem 4: Middle Node ===\n";
    ListNode* t4 = buildList({1, 2, 3, 4, 5, 6});
    cout << "List:   "; printList(t4);
    ListNode* mid = middleNode(t4);
    cout << "Middle: "; printList(mid); // prints from mid to end
    freeList(t4);

    cout << "\n=== Test Problem 5: Reverse List ===\n";
    ListNode* t5 = buildList({1, 2, 3, 4, 5});
    cout << "Original: "; printList(t5);
    t5 = reverseList(t5);
    cout << "Reversed: "; printList(t5);
    freeList(t5);

    cout << "\n=== Test Problem 6: Remove 2nd from End ===\n";
    ListNode* t6 = buildList({1, 2, 3, 4, 5});
    cout << "Original: "; printList(t6);
    t6 = removeNthFromEnd(t6, 2);
    cout << "Result:   "; printList(t6);
    freeList(t6);

    return 0;
}