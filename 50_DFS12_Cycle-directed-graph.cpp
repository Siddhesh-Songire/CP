//* Cycle detection in directed graph using DFS

/*  
class Solution {
  public:
    bool dfs(int i, int vis[], int path[], vector<int> adj[]){
        vis[i] = 1;
        path[i] = 1;
        for(auto it : adj[i]){
            if(vis[it] == 0){
                if(dfs(it, vis, path, adj)) return true;
            }
            else if(vis[it] == 1 && path[it] == 1) return true;
        }
        path[i] = 0;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int path[V] = {0};
        for(int i =0; i<V; i++){
            if(!vis[i]){
                if(dfs(i, vis, path, adj)) return true;
            }
        }
        return false;
    }
};
*/
/*
&AFHKSFKJJSKDFHJK
!adsda
?dsadjai
TODO  asdsfhjfdsajsaljaslj
^ Hello  😎
*/

//* Using TOPO sort
/*
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> v;
        int ind[V] = {0};
        
        for(int i = 0; i<V; i++){
            for(auto it : adj[i]) ind[it]++;
        }
        
        queue<int> q;
        for(int i = 0; i<V; i++) if(ind[i] == 0) q.push(i);
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            v.push_back(x);
            
            for(auto it : adj[x]){
                ind[it]--;
                if(ind[it] == 0) q.push(it);
            }
        }
        
        if(v.size() == V) return false;
        else return true;
        
    }
};
*/