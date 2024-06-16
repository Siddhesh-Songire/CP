//*Shortest Path in Weighted undirected graph
// https://practice.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-weighted-undirected-graph
/*
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        vector<pair<int,int>> adj[n+1]; //? vertices are from 1
        for(auto it : edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        
        vector<int> dist(n+1,1e9), par(n+1);
        
        for(int i = 1; i<n+1; i++) par[i] = 1; 
        
        set<pair<int,int>> st;
        dist[1] = 0;
        st.insert({0,1});
        
        while(!st.empty()){
            auto it = *(st.begin());
            int dis_node = it.first;
            int node = it.second;
            
            st.erase(it);
            
            for(auto it : adj[node]){
                if(dis_node + it.second < dist[it.first]){
                    dist[it.first] = dis_node + it.second;
                    st.insert({dist[it.first], it.first});
                    par[it.first] = node; //? update parent
                }
            }
        }
            if(dist[n] == 1e9) return {-1}; //? it not found then return -1
            
            vector<int> ans;
            
            int node = n;
            while (par[node] != node)
            {
                ans.push_back(node);
                node = par[node];
            }
            ans.push_back(1);
            
            reverse(ans.begin(), ans.end());
            return ans;
            
            
            
        }
    
};
*/