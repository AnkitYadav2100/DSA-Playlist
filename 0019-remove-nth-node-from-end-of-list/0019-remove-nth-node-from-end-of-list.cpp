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
    int getSize(ListNode* head){
        ListNode* temp = head;
        int sz = 0;
        while(temp!=nullptr){
            sz++;
            temp = temp->next;
        }
        return sz;
    };
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = getSize(head);
        ListNode* prev = head;
        if(size == n) return head->next;
        for(int i=1; i<size-n; i++){
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return head;        
    }
};