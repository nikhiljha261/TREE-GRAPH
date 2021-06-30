Node* lcaa(Node* root,int n1,int n2)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    if(root->data==n1 or root->data==n2)
    {
        return root;
    }
    Node* left=lcaa(root->left,n1,n2);
    Node* right=lcaa(root->right,n1,n2);
    if(left!=nullptr and right!=nullptr)
    {
        return root;
    }
    else if(left!=nullptr)
    {
        return left;
    }
    return right;

}
Node* lca(Node* root ,int n1 ,int n2 )
{
   return lcaa(root,n1,n2);
}
