void mazePath(int i,int j,int m[MAX][MAX],int n,string s,vector<string >&  result){
    
    if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 ){
        return;
    }
    else if(i == n-1 && j == n-1){
        result.push_back(s);
        return;
    }
    else{
        m[i][j]=0;
        mazePath(i+1,j,m,n,s +'D',result);
        mazePath(i-1,j,m,n,s +'U',result);
        mazePath(i,j+1,m,n,s +'R',result);
        mazePath(i,j-1,m,n,s +'L',result);
        m[i][j]=1;
    }
}
