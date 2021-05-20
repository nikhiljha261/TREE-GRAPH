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
        vector<vector<pair<int,int>>> v(n+1,vector<pair<int,int>>(n+1));
        loop(i,0,m)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back({b,0});
            v[b].push_back({a,1});
        }
        deque<int> q;
        q.push_front(1);
        int  d[n+1];
        loop(i,0,n+1)
        {
            d[i]=INT_MAX;
        }
        d[1]=0;
        d[0]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop_front();
            for(auto child : v[node])
            {
                int x=child.first;
                int y=child.second;
                if(d[x]>d[node]+y)
                {
                    d[x]=d[node]+y;
                    if(y==1)
                    {
                        q.push_back(x);
                    }
                    else
                    {
                        q.push_front(x);
                    }
                }
            }
        }
        cout<<d[n]<<endl;
        // loop(i,0,n+1)
        // {
        //     cout<<d[i]<<" ";
        // }

    }
    #ifndef ONLINE_JUDGE 
      clock_t end = clock();
      cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif
}  
