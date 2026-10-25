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
    ListNode* partition(ListNode* head, int x) {
        // do linked list banao ek me x se kam wale ek me x se jada wale fir dono ko merge kar do 
        ListNode* lo = new ListNode(0);
        ListNode* hi = new ListNode(0);

        ListNode* templo = lo ;
        ListNode* temphi = hi ;
        ListNode* temp = head ;
        while(temp!=NULL){
            if(temp->val<x){
                templo->next = temp ;
                temp = temp->next;
                templo = templo->next;
            }
            else{
                temphi->next = temp ;
                temp = temp->next ;
                temphi = temphi->next;
            }
        }
        templo->next = hi->next ;
        temphi->next= NULL ;
        return lo->next ;
    }
};