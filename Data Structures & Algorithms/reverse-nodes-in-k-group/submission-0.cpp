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
    int length(ListNode* head){
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        // If LL is empty...
        if(head == NULL){
            return head;
        }

        // If k is greater than the length of LL...
        if(k > length(head)){
            return head;
        }

        // If LL is valid to reverse in k group...
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;
        int count = 0;
        while(count < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        if(forward != NULL){
            head->next = reverseKGroup(forward, k);
        }

        return prev;
    }
};
