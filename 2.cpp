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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* current1 = l1;
        ListNode* current2 = l2;
        int num1 = current1->val;
        int num2 = current2->val;
        int sum = num1 + num2;
        int sobrante = sum / 10;
        ListNode* newHead = new ListNode(sum % 10);
        ListNode* head;
        head = newHead;
        current1 = current1->next;
        current2 = current2->next;

        while ((current1 != nullptr) || (current2 != nullptr) || (sobrante != 0))
        {
            if ((current1 != nullptr) && (current2 != nullptr))
            {
                num1 = current1->val;
                num2 = current2->val;
                sum = num1 + num2 + sobrante;
                sobrante = sum / 10;
                ListNode* nextNode = new ListNode(sum % 10);
                head->next = nextNode;
                head = nextNode;
                current1 = current1->next;
                current2 = current2->next;
            } else if (current1 != nullptr)
            {
                num1 = current1->val;
                sum = num1 + sobrante;
                sobrante = sum / 10;
                ListNode* nextNode = new ListNode(sum % 10);
                head->next = nextNode;
                head = nextNode;
                current1 = current1->next;
            } else if (current2 != nullptr)
            {
                num2 = current2->val;
                sum = num2 + sobrante;
                sobrante = sum / 10;
                ListNode* nextNode = new ListNode(sum % 10);
                head->next = nextNode;
                head = nextNode;
                current2 = current2->next;
            } else if (sobrante != 0)
            {
                ListNode* nextNode = new ListNode(sobrante);
                head->next = nextNode;
                head = nextNode;
                sobrante = 0;
            }
            
        }
        return newHead;
    }
};