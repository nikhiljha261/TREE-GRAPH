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

vector<int> adj;
vector<bool> vis;
vector<bool> st;
//detect a cycle in directed graph
bool dfs(int node,int par)
{
    // i dont need stack here
    vis[node]=true;
    for(auto child : adj[node])
    {
        if(!vis[child])
        {
            if(dfs(child,node)) return true;
        }
        else
        {
            if(child!=par) return true;
        }
    }
    return false;
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
        int n,m;
        cin>>n>>m;
        adj=vector<int>(n);
        loop(i,0,m)
        {
            cin>>a>>b;
            adj[a].push_back(b);
        }
        vis=vector<bool>(n);
        st=vector<bool>(n);

        return dfs(0);

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

