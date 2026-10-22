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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {

        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                temp = temp->next;
                list1 = list1->next;
            } else {
                temp->next = list2;
                temp = temp->next;
                list2 = list2->next;
            }
        }

        temp->next = (list1 != nullptr)? list1 : list2;
        return dummy.next;
    }

   
};

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
    Solution solver;

    // Test Case 1: Standard merge
    cout << "=== Test 1: [1, 2, 4] and [1, 3, 4] ===\n";
    ListNode* l1 = buildList({1, 2, 4});
    ListNode* l2 = buildList({1, 3, 4});
    ListNode* merged1 = solver.mergeTwoLists(l1, l2);
    printList(merged1);
    freeList(merged1); // Note: Original nodes are reused, so freeing merged1 cleans up all

    // Test Case 2: One empty list
    cout << "\n=== Test 2: [] and [0] ===\n";
    ListNode* l3 = buildList({});
    ListNode* l4 = buildList({0});
    ListNode* merged2 = solver.mergeTwoLists(l3, l4);
    printList(merged2);
    freeList(merged2);

    // Test Case 3: Both empty lists
    cout << "\n=== Test 3: [] and [] ===\n";
    ListNode* l5 = buildList({});
    ListNode* l6 = buildList({});
    ListNode* merged3 = solver.mergeTwoLists(l5, l6);
    printList(merged3);
    freeList(merged3);

    return 0;
}