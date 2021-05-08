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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==nullptr) return ans;
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                
                TreeNode* temp=q.front();
                q.pop();
                if(i==sz-1)
                {
                    ans.push_back(temp->val);
                }
                if(temp->left!=nullptr)
                {
                    q.push(temp->left);
                }
                if(temp->right!=nullptr)
                {
                    q.push(temp->right);
                }
            }
            
        }
        return ans;
        
    }
};
