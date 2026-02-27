// link : https://leetcode.com/problems/number-of-islands/description/

class Solution {
public:
 int n,m;
    bool vis[303][303]; 
    vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
    int ar = 0;
    bool isValid(int i,int j){
        if(i<0 || i>=n || j<0 || j>=m) return false;
        return true;
    }
    void dfs(int i,int j, vector<vector<char>>& grid){
        vis[i][j] = true;
        for(int k =0;k<4;k++){
            int ci = i+dir[k].first;
            int cj = j+dir[k].second;

            if(isValid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == '1'){
                dfs(ci,cj,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
      n = grid.size();
        m = grid[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, grid);
                    ar++;
                }
            }
        }
        return ar;
        
    }
};
