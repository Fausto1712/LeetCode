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
    ListNode* middleNode(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while((fast->next != nullptr) && (fast->next->next != nullptr)){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast->next != nullptr){
            return(slow->next);
        } else {
            return(slow);
        }

    }
};