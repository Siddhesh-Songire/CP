//* Distance of nearest cell having 1
// https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=distance-of-nearest-cell-having-1

/*
class Solution
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>>nearest(vector<vector<int>>grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dist(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));

        queue<pair<int, pair<int,int>>> q;

        for(int i = 0; i < n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 1){
                    q.push({0,{i,j}});
                    vis[i][j] = 1;
                }

            }
        }

        int dr[] = {0, 1, -1, 0};
        int dc[] = {-1, 0, 0, 1};

        while(!q.empty()){
            auto x = q.front();
            q.pop();
            int dis = x.first;
            int row = x.second.first;
            int col = x.second.second;
            dist[row][col] = x.first;

            for(int i = 0; i<4; i++){
                int new_r = row + dr[i];
                int new_c = col + dc[i];

                if(new_r >= 0 && new_c >= 0 && new_r < n && new_c < m &&
                vis[new_r][new_c] == 0){
                    q.push({dis + 1, {new_r, new_c}});
                    vis[new_r][new_c] = 1;
                }
            }

        }

        return dist;
    }
};
*/




//* Replace O's with X's
// https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=replace-os-with-xs
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{

public:


    int dr[4] = {0, 1, -1, 0};
    int dc[4] = {-1, 0, 0, 1};
    
    void dfs(int r, int c,vector<vector<char>> mat,vector<vector<int>>& vis,int n, int m){
        vis[r][c] = 1;
        
        
        for(int i = 0; i<4; i++){
            int new_r = r + dr[i];
            int new_c = c + dc[i];
            
            if(new_r >= 0 && new_c >= 0 && new_r < n && new_c < m && mat[new_r][new_c] == 'O' &&
            !vis[new_r][new_c]){
                dfs(new_r,new_c, mat, vis, n , m);
            }
        
    }
    }
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        // traverse rows
        for(int i = 0; i<m ; i++){
            if(mat[0][i] == 'O' && vis[0][i] == 0){
                dfs(0,i,mat,vis,n,m);
            }
            
        if(mat[m-1][i] == 'O' && vis[m-1][i] == 0){
                dfs(m-1,i,mat,vis,n,m);
            }
        }
        
        //traverse columns
        for(int j = 0; j<n; j++){
            if(mat[j][0] == 'O' && vis[j][0] == 0){
                dfs(j,0,mat,vis,n,m);
            }
            
        if(mat[j][n-1] == 'O' && vis[j][n-1] == 0){
                dfs(j,n-1,mat,vis,n,m);
            }
        }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(vis[i][j] == 0 && mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}

//* Number Of Enclaves
//https://practice.geeksforgeeks.org/problems/number-of-enclaves/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number-of-enclaves
/*
class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> delRow = {-1, 0, +1, 0};
        vector<int> delCol = {0, +1, 0, -1};
        vector<vector<int>> vist(n, vector<int>(m, 0));
		// BFS
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 || i == n-1 || j == 0 || j == m-1)
                {
                    if(!vist[i][j] && grid[i][j] == 1)
                    {
                        q.push({i, j});
                        // vist[i][j] = 1;
                    }
                    
                }
            }
        }
       
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            vist[row][col] = 1;
            q.pop();
            for(int i = 0; i < 4; i++)
            {
                int r = row + delRow[i];
                int c = col + delCol[i];
                if(r >= 0 && r < n && c >= 0 && c < m && !vist[r][c] && grid[r][c] == 1)
                {
                    q.push({r, c});
                    // vist[r][c] = 1;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(!vist[i][j] && grid[i][j] == 1)
                    ans++;
            }
        }
        return ans;
    }
};*/