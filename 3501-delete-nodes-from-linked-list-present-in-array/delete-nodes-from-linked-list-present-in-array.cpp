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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>mp(nums.begin(),nums.end());
         while(head != NULL && mp.find(head->val) != mp.end()) {
            head = head->next;
        }
        ListNode* temp = head ;
        while(temp!=NULL && temp->next!=NULL){
            if(mp.find(temp->next->val) != mp.end()){
                temp->next = temp->next->next ;
            }
            else  temp = temp->next ;
        }
        return head ;
    }
};