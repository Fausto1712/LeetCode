#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr){
            return true;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while((fast->next != nullptr) && (fast->next->next != nullptr)){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* secondHalfHead = reverse(slow->next);
        ListNode* firstHalfHead = head;

        while(secondHalfHead != nullptr && firstHalfHead != nullptr){
            if (firstHalfHead->val != secondHalfHead->val)
            {
                return false;
            }
            secondHalfHead = secondHalfHead->next;
            firstHalfHead = firstHalfHead->next;
        }
        return true;
    }

private:
    ListNode* reverse(ListNode* head){
        ListNode* newHead = nullptr;
        while (head != nullptr)
        {
            ListNode* next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    }
};