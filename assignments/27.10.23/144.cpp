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
// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     if(root==NULL)
//         return ans;
//     stack <TreeNode*> s;
//     s.push(root);

//     while(!s.empty()){
//         TreeNode* temp = s.top();
//         s.pop();
//         ans.push_back(temp->val);

//         if(temp->right!=NULL)
//             s.push(temp->right);
//         if(temp->left!=NULL)
//             s.push(temp->left);


//     }
//     return ans;
//     }
// };


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nodes;
        preorder(root, nodes);
        return nodes;
    }
private:
    void preorder(TreeNode* root, vector<int>& nodes) {
        if (!root) {
            return;
        }
        nodes.push_back(root -> val);
        preorder(root -> left, nodes);
        preorder(root -> right, nodes);
    }
};