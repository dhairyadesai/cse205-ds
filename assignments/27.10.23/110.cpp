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
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int l = depth(root->left);
        int r= depth(root->right);

        return isBalanced(root->left)  && isBalanced(root->right) && abs(l-r)<=1
;        
    }

    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int l= depth(root->left);
        int r= depth(root->right);

        return max(l,r)+1;

    }
};