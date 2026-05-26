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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        //Create a dummu node by dynamically allocation
        ListNode* dummy = new ListNode(0);

        //connect dummy to head
        dummy->next= head;
        
        //assign dummy as prev 
        ListNode* prev = dummy;

        //traverse till a node before left
        for(int i=1; i<left; i++){
            prev = prev->next;
        }

        //assign a new Node Curr as prev->next node
        ListNode* curr = prev->next;

        //reverse portion
        for(int i=0; i<right-left; i++){
             ListNode* temp = curr->next;

            curr->next = temp->next;

            temp->next = prev->next;

            prev->next = temp;
        }
            return dummy->next;


    }
};