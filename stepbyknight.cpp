	int minStepToReachTarget(vector<int>&kp, vector<int>&tp, int n){
	    int dx[8]={+2,+2,-2,-2,+1,-1,+1,-1};
        int dy[8]={+1,-1,+1,-1,+2,+2,-2,-2};
	    queue<pair<pair<int,int>,int>> q;
	    q.push({{kp[0],kp[1]},0});
	    bool vis[n + 1][n + 1];
  
        // make all cell unvisited
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                vis[i][j] = false;
      
	   // vector<vector<bool>> vis(n,vector<int>(n));
	    vis[kp[0]][kp[1]]=true;
	    while(!q.empty())
	    {
	        auto node=q.front();
	        q.pop();
	        int x=node.first.first;
	        int y=node.first.second;
	        int d=node.second;
	        if(x==tp[0] and y==tp[1])
	        {
	            return d;
	        }
	        for(int i=0;i<8;i++)
	        {
	            int nx=x+dx[i];
	            int ny=y+dy[i];
	            if(nx<=0 or nx>n or ny>n or ny<=0)
	            {
	                continue;
	            }
	            if(!vis[nx][ny])
	            {
	                vis[nx][ny]=true;
	                q.push({{nx,ny},d+1});
	            }
	        }
	    }
	}
};
