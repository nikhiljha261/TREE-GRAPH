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


void populatenextpointer(node* root)
{
    if(root==nullptr)
    {
        return root;
    }
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int sz=q.size()
        loop(i,0,sz)
        {
            node* temp=q.front();
            q.pop();
            if(i==sz-1)
            {
                temp->next=nullptr;
            }
            else
            {
                temp->next=q.front();
            }
        }
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
        node* root=new node(80);

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

