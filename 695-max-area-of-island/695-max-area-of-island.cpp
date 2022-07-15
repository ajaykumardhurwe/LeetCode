class Solution {
public:
        int dfs(int i,int j,vector<vector<int>>& grid,int n,int m){
   if(i<0||j<0||j>=m||i>=n) return 0;
    if(grid[i][j]==1 && i>=0 && j>=0 && i<n && j<m){
        grid[i][j]=0;
        return 1+dfs(i-1,j,grid,n,m)+dfs(i+1,j,grid,n,m)+dfs(i,j+1,grid,n,m)+dfs(i,j-1,grid,n,m);
    }
    return 0;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int count=0;
     int n=grid.size();
    int m=grid[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(grid[i][j]==1){
               int ans=dfs(i,j,grid,n,m);
               count=max(count,ans);
           } 
        }
    }
    return count;
    }
};