//har har mahadev
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i,a,b)     for(int i=(a);i<(b);i++)
#define endl            "\n"
const int INF = 1e9;
// cout<<fixed<<setprecision(9)<<" ";
// double rounded = std::floor((V * 100) + .5) / 100;

void ganeshji(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int n;
vector<vector<pair<int,int>>> adj;
vector<vector<int>> d;

void dij(int src,vector<int>& d)
{
    d=vector<int>(n,INF);
    set<pair<int,int>> s;
    d[src]=0;
    s.insert({d[src],src});
    while(!s.empty())
    {
        pair<int,int> temp=*(s.begin());
        s.erase(s.begin());
        int node=temp.second;
        for(auto i : adj[node])
        {
            int wt=i.second;
            int child=i.first;
            if(d[child]>d[node]+wt)
            {
                if(d[child]!=INF)
                {
                    s.erase(s.find({d[child],child}));
                }
                d[child]=d[node]+wt;
                s.insert({d[child],child});
            }
        }
    }
    return ;

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
        int m,k;
        cin>>n>>m>>k;

        adj=vector<vector<pair<int,int>>>(n);
        loop(i,0,m)
        {
            int a,b,w;
            cin>>a>>b>>w;
            --a;
            --b;
            adj[a].push_back({b,w});
            adj[b].push_back({a,w});
        }

        d=vector<vector<int>>(n);
        loop(i,0,n)
        {
            dij(i,d[i]);
        }
        loop(i,0,n)
        {
            cout<<i+1<<"-->";
            loop(j,0,n)
            {
                cout<<d[i][j]<<" ";
            }
            cout<<endl;
        }



    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}

