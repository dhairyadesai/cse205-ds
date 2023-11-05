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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        bool b = true;
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            
            int s = q.size();
            vector<int> v(s);

            for(int i=0;i<s;i++){
                TreeNode *temp = q.front();
                q.pop();

                int index = (b)? i : (s-1-i);
                v[index]=temp->val;

                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);



            }
            b=!b;
            ans.push_back(v);
        }return ans;
    }
};