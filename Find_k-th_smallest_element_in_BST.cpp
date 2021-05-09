//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(int i=(a);i<(b);i++)
#define endl            "\n"
// cout<<fixed<<setprecision(9)<<" ";
// double rounded = std::floor((V * 100) + .5) / 100;

void ganeshji(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

struct node{
    int val;
    node* left;
    node* right;
    int count;
    node(int data)
    {
        val=data;
        left=nullptr;
        right=nullptr;
        count=0;
    }
};

void insert(node* root,int key)
{
    if(root==nullptr)
    {
        return node* newroot=new node(key);
    }
    if(key<root->val)
    {
        root->count+=1;
        root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
}
//o(N) //o(N) //preorder traversal sorted order
//o(h) o(h) //augmented tree
node* find_k_small(node* root,int k)
{
    if(root==nullptr)
    {
        return nullptr;
    }
    if(root->count+1==k)
    {
        return root;
    }
    else if(root->count+1<k)
    {
        find_k_small(root->right,k);
    }
    else
    {
        find_k_small(root->left,k);
    }
}

int main()
{
    ganeshji();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    clock_t begin = clock();
    ll t=1;
    // cin>>t;
    while(t--)
    {
        node* root=new node();
        root=insert();
        root=insert();
        root=insert();
        root=insert();
        root=insert();
        int k;
        cin>>k;
        cout<<find_k_small(root)->val<<endl;
    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

