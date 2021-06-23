/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* root, int B) {
    queue<TreeNode*> q;
    q.push(root);
    vector<int> ans;
    while(!q.empty())
    {
        int sz=q.size();
        vector<int> x;
        bool cro=false;
        for(int i=0;i<sz;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=nullptr and temp->right!=nullptr)
            {
                if(temp->left->val==B)
                {
                    q.push(temp->left);
                }
                else if(temp->right->val==B)
                {
                    q.push(temp->right);
                }
                else
                {
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            else if(temp->left!=nullptr)
            {
                q.push(temp->left);
            }
            else if(temp->right!=nullptr)
            {
                q.push(temp->right);
            }
            if(temp->val==B)
            {
                cro=true;
                continue;
            }
            x.push_back(temp->val);
        }
        if(cro==true)
        {
            return x;
        }
    }
    return ans;
} 
