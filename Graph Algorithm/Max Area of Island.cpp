class Solution {
public:
    int n,m;
    bool vis[55][55]; 
    vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
    int ar = 0;
    bool isValid(int i,int j){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    int dfs(int i,int j, vector<vector<int>>& grid){
        vis[i][j] = true;
        ar++;
        for(int k =0;k<4;k++){
            int ci = i+dir[k].first;
            int cj = j+dir[k].second;

            if(isValid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1){
                dfs(ci,cj,grid);
            }
        }
        return ar;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int mx = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    int area = dfs(i, j, grid);
                    mx = max(mx, area);
                    ar =0;
                }
            }
        }
        return mx;
        
    }
};
