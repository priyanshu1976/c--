#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Split the list into two halves
        ListNode* head2 = slow->next;
        reverse(head2);
        ListNode* t1 = head, t2 = head->next ,t3 = head2,t4 = head2->next;
        while(t2 != nullptr || t3 != nullptr){
            t1->next = t3;
            t3->next = t2;
            t1 = t2;
            t2 = t2->next;
            t3 = t4;
            t4 = t4->next;
        }
        t1->next = t3;
        t3->next = t2;
        if(t2 != nullptr){
            t2->next = t4;
        } 
        return head;
    }
};

int main() {
    cout << "hello world" << endl;
    return 0;
}