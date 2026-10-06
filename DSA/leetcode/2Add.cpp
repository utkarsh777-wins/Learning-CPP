// ADD two numbers 
#include <iostream>
#include <vector>

using namespace std;

struct ListNode{
    int data;
    ListNode* next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : data(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
    ListNode dummy(0);
    ListNode* node = &dummy;
    int carry = 0; 

    while(l1 != nullptr || l2 != nullptr || carry != 0)
    {
        int sum = carry;

        if (l1 != nullptr){
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        node->next = new ListNode(sum % 10);
        node = node->next;
    } 

    ListNode* result = dummy.next;
    return result;
}

void diplay() 
{
    
}