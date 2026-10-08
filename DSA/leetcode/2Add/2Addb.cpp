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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode dummy(0);
        ListNode* node = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            node->next = new ListNode(sum % 10);
            node = node->next;
        }
        ListNode* result = dummy.next;
        return result;
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

    // Test Case: 342 + 465 = 807
    // Stored in reverse: [2, 4, 3] + [5, 6, 4] -> [7, 0, 8]
    ListNode* l1 = buildList({2, 4, 3});
    ListNode* l2 = buildList({5, 6, 4});

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);

    ListNode* res = solver.addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(res);

    freeList(l1);
    freeList(l2);
    freeList(res);

    return 0;
}