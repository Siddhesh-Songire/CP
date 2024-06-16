///* Shortest path in Undirected Graph having unit distance
// https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-undirected-graph-having-unit-distance

/*
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        ^ adj list
        vector<int> adj[N];
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        ^dist array
        int dist[N];
        for(int i = 0; i<N; i++) dist[i] = 1e9;
        
        ^ BFS
        queue<int> q;
        dist[src] = 0; //! imp dist of src is to be made 0
        q.push(src);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node]){
                if(dist[node] + 1 < dist[it]){
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        
        ^if it is unreachable to reach any vertex, then -1
        vector<int> v(N,-1);
        for(int i = 0; i<N; i++){
            if(dist[i] != 1e9) v[i] = dist[i];
        }
        
        return v;
    }
};*/