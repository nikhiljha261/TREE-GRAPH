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
    node* next;
    node(int x)
    {
        val=x;
        left=nullptr;
        right=nullptr;
        next=nullptr;
    }
};

// int i=n-1;
//o(n) solution 
node* bst(vector<int>& v,int l,int h)
{
    if(l>h)
    {
        return nullptr;
    }
    int mid=(l+h)/2;
    node* root=new node(v[mid]);
    root->left=bst(v,l,mid-1);
    root->right=bst(v,mid+1,h);
    return root;
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
        node* root=new node(80);

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

