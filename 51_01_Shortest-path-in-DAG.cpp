//* Shortest path in Directed Acyclic Graph
//https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=direct-acyclic-graph

/*
class Solution {
private:
    void dfs(int i, vector<pair<int,int>> adj[], int vis[], stack<int>& st){
        vis[i] = 1;
        for(auto it : adj[i]){
            int v = it.first;
            if(!vis[v]){
                dfs(v, adj, vis, st);}
        }
        st.push(i);
    }
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        ^ adj list of graph whith wwights
        vector<pair<int,int>> adj[N];
        for(int i = 0; i<M; i++){
            int s = edges[i][0];
            int e = edges[i][1];
            int wt = edges[i][2];
            adj[s].push_back({e,wt});
        }
        
        ^ TOPO sort
        int vis[N] = {0};
        stack<int> st;
        for(int i = 0; i<N; i++){
            if(!vis[i]) dfs(i, adj, vis, st);
        }
        
        ^ Relax all the edges one by one;
        vector<int> dis(N,1e9);
        dis[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(auto it: adj[node]){
                int v = it.first;
                int wt = it.second;
                if(dis[node] + wt < dis[v]){
                    dis[v] = dis[node] + wt;
                }
            }
        }
        
        for(int i = 0; i<N; i++){
            if(dis[i] == 1e9) dis[i] = -1;
        }
        
        return dis;
    }
};*/