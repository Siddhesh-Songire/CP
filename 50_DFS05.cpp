//* 200. Number of Islands
// Basically find the number of connected components
// https://leetcode.com/problems/number-of-islands/

#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    
    // boundary checking
    if(i < 0 || j  < 0 ) return;
    if(i >= n || j >= m) return;
    
    // return if current position is of water or is already visited
    if(grid[i][j] == '0' || grid[i][j] == '2') return;

    // mark the current as visited
    grid[i][j] = '2';
    
    // do DFS in all 4 directions
    dfs(i-1, j, grid);
    dfs(i+1, j, grid);
    dfs(i, j-1, grid);
    dfs(i, j+1, grid);

}

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(); // col
        int m = grid[0].size(); //row
        int ct = 0; // ct variable for no of dfs performed
        
        for(int i = 0; i<n ; i++){
            for (int j = 0; j < m; j++)
            {   
                if(grid[i][j] == '1'){
                    dfs(i,j,grid);
                    ct++;
                }
            }
            
        }

        return ct;
    }


int main(){

}
/*
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    eraseIslands(grid, i, j);
                }
            }
        }
        return islands;
    }
private:
    void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        eraseIslands(grid, i - 1, j);
        eraseIslands(grid, i + 1, j);
        eraseIslands(grid, i, j - 1);
        eraseIslands(grid, i, j + 1);
    }
};
*/