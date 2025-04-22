/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=nullptr;
        ListNode* temp1=head;
        while(temp1){
            ListNode* nxt=temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=nxt;
        }
        return temp;
    }
};