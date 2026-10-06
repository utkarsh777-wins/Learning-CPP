#include <iostream>
#include <vector>

using namespace std;


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

    // ListNode dummy(0, head);        //  stack-allocated dummy pointing at head
    // ListNode* temp = &dummy;
    if (head == nullptr) return head;
    ListNode* del = head;
    if (head->val == val) {
        head = del->next;
        delete del;
    }

    ListNode* temp = head->next;
    while (temp != nullptr) 
    {
        if (temp->val == val) {
            // del->next = temp->next;
            // temp = del;
            // del = del->next;
            // temp->next = del->next;
            // delete del;
            del->next = temp->next;
            delete temp;

            temp = del->next;
        } else {
            del = temp;
            temp = temp->next;

        }


    }
    return head;
}

// Problem 4: Find the Middle Node (Tortoise & Hare)
// Return the middle node (or second middle if even length).
ListNode* middleNode(ListNode* head) {

    ListNode* tortoise = head;
    ListNode* hare = head;

    while (hare != nullptr && hare->next != nullptr) {
        hare = hare->next->next;
        tortoise = tortoise->next;
    }

    return tortoise;
    // ListNode* temp = head;
    // int count = 0;

    // while (temp->next != nullptr) {
    //     count++;
    //     temp = temp->next;
    // }

    // if (count % 2 == 0) {
    //     count = count / 2;
    // } else {
    //     count = count / 2 + 1;
    // }

    // temp = head;
    // for(int i=0 ; i<count; i++) {
    //     temp = temp->next;
    // }

    // return temp;
}

// Problem 5: In-Place Reversal
// Reverse the list pointers in-place with O(1) extra space.
ListNode* reverseList(ListNode* head) {
    // TODO: Write your logic here
    // ListNode* temp = head;
    // // ListNode* prev = nullptr;
    // // ListNode* tail = new ListNode();
    // vector<int> cpy;

    // // while(temp->next != nullptr) {
    // //     prev = temp;
    // //     temp = temp->next;
    // //     temp->next = prev;
    // //     prev = prev->next;
    // // }
    // int i =0;
    // while (temp != nullptr) {
    //     cpy.push_back(temp->val);
    //     i++;
    //     temp = temp->next;
    // }

    // temp = head;
    // for (int j = i-1; j>=0; j--) {
    //     temp->val = cpy[j];
    //     temp = temp->next;
    // }

    // // tail->next = temp;
    // // while;

    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}

// Problem 6: Remove N-th Node From End of List
// Remove the n-th node from the end in one pass.
ListNode*  removeNthFromEnd(ListNode* head, int n) 
{
    // ListNode* fast = head;
    
    // for (int i=0; i<n; i++) {
    //     fast = fast->next;
    // }

    // if (fast == nullptr) {
    //     ListNode* del = head;
    //     head = head->next;
    //     delete del;
    //     return head;
    // }

    // ListNode* slow = head;
    // while (fast->next != nullptr)
    // {
    //     fast = fast->next;
    //     slow = slow->next;
    // }

    // ListNode* del = slow->next;
    // slow->next = del->next;
    // delete del;

    // return head;
    ListNode dummy(0, head);
    ListNode* fast = &dummy;
    ListNode* slow = &dummy;

    for (int i=0; i<=n; i++) {
        fast = fast->next;
    }

    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* del = slow->next;
    slow->next = del->next;
    delete del;

    return dummy.next;
}
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     // TODO: Write your logic here
//     ListNode* prev = nullptr;
//     ListNode* curr = head;
//     ListNode* next = nullptr;

//     while (curr != nullptr) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
    
//     head = prev;
//     ListNode* del = head;
//     ListNode* temp = head;
//     for (int i = 1; i<n; i++) {
//         temp = temp->next;
//     }
//     del = temp->next;
//     temp->next = del->next;
//     delete del;
    
//     prev = nullptr;
//     next = nullptr;
//     curr = head;
//     while (curr != nullptr) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }

//     head = prev;
//     return head;
// }

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