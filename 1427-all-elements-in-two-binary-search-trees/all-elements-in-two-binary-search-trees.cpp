/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 void t1(TreeNode* root1,vector<int>&temp){

    if(root1==NULL)return;

    temp.push_back(root1->val);

    t1(root1->left,temp);
    t1(root1->right,temp);
 }

 void t2(TreeNode* root2,vector<int>&temp){

    if(root2==NULL)return;

    temp.push_back(root2->val);

    t2(root2->left,temp);
    t2(root2->right,temp);
 }

class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        vector<int>ans;

        t1(root1,ans);
        t2(root2,ans);

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};