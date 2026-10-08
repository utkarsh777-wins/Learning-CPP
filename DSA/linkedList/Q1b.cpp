#include <iostream>
#include <vector>

using namespace std;

// Standard LeetCode ListNode definition
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

// Return 0-based index of first occurrence of 'val', or -1 if not found.
int findIndex(ListNode* head, int val) {
    
    int count = 0;
    while (head != nullptr) {
        if (head->val == val) {
            return count;
        }

        count++;
        head = head->next;
    }
    return -1;
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
//  MAIN TEST RUNNER
// ==========================================

int main() {
    ListNode* head = buildList({10, 20, 30, 40});

    cout << "List: ";
    printList(head);

    int testVals[] = {30, 10, 99};
    for (int target : testVals) {
        int idx = findIndex(head, target);
        cout << "Target " << target << " found at index: " << idx << "\n";
    }

    freeList(head);
    return 0;
}