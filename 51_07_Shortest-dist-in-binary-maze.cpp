//*https://practice.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-a-binary-maze
/*
class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        queue<pair<int,pair<int,int>>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        
        dist[source.first][source.second] = 0;
        q.push({0,{source.first, source.second}});
        
        int dr[] = {0, -1, 1, 0};
        int dc[] = {1, 0, 0, -1};
        
        if(source == destination)
            return 0;
            
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            
            int dis = x.first;
            int r = x.second.first;
            int c = x.second.second;
            
            for(int i = 0; i<4; i++){
                int new_r = r + dr[i];
                int new_c = c + dc[i];
                
                if(new_r >= 0 && new_c >= 0 && new_r < n && new_c < m && grid[new_r][new_c] == 1){
                    if(dis + 1 < dist[new_r][new_c]){
                        dist[new_r][new_c] = dis + 1;
                        q.push({dist[new_r][new_c], {new_r,new_c}});
                    }
                    if(new_r == destination.first && new_c == destination.second) return dis + 1;
                }
                    
            }
            
        }
            return -1;
        
    }
};*/