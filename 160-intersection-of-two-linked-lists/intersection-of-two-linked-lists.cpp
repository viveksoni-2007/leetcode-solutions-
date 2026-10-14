/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> A;

        ListNode* temp = headA;

        while (temp != NULL) {
            A.insert(temp);
            temp = temp->next;
        }

        temp = headB;

        while (temp != NULL) {
            if (A.find(temp) != A.end()) {
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};