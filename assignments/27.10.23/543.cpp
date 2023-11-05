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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        

        int o1 = depth(root->left) + depth(root->right);
        int o2 = diameterOfBinaryTree(root->left);
        int o3 = diameterOfBinaryTree(root->right);


        return max(o1,max(o2,o3)) ;


        
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