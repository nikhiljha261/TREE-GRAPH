
class Node
	{
	    public:
	    int val;
	    Node* left;
	    Node* right;
	};
	
	Node* newNode(int data)
	{
	    Node* tnode = new Node();
	    tnode->val = data;
	    tnode->left = NULL;
	    tnode->right = NULL;
	    return tnode;
	}
	
	
	Node* tobst(vector<int> arr,int start,int end)
	{
	    if(start>end)
	        return NULL;
	        
	   int mid = (start+end)/2;
	   
	   Node* root = newNode (arr[mid]);
	   
	   root->left = tobst(arr,start,mid-1);
	   root->right = tobst(arr,mid+1,end);
	   
	   return root;
	}
	
	void preorder(Node* root)
	{
	    if(root==NULL)
	        return;
	   cout<<root->val<<" ";
	   preorder(root->left);
	   preorder(root->right);
	}

int main() {
	
	int t;cin>>t;
	
	while(t--)
    {
        int n;cin>>n;
        vector<int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        Node* root = tobst(arr,0,n-1);
        preorder(root);
        cout<<endl;
    }
	return 0;
}
