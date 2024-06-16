// * Check whether cycle is present in graph or not
// Hint: If a node is already visited (except the parent node)then cycle is present in graph
// ! Doubt ara 

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];
bool check = false;
int ct = 0;

void dfs(int vertex, int parent){
    vis[vertex] = true;

    parent = vertex;
    for(int child : graph[vertex]){
        if(vis[child] && child == parent) continue;
        if(vis[child]){
            check = true;
            ct ++;
            continue;
        }
        dfs(child, vertex);
    }
    
}

int main(){
    int n , e;
    cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        int x , y ;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    // we need to implement dfs on each node as their might be multiple connected components;
    for (int i = 1; i <= N; i++)
    {   
        if(vis[i]) continue;
        dfs(i,0);
        cout << check << endl;
        check = false;

    }
    // cout << ct;
    

    
}

//* https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

/*
    class Solution {
  public:
    bool dfs(int i, int par, int vis[], vector<int> adj[]){
        vis[i] = 1;
        for(auto it : adj[i]){
            if(!vis[it]){
                if(dfs(it, i, vis, adj)) return true;
            }
            
            else if(it != par){
                return true;
            }
        }
        return false;
    }

    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        for(int i =0; i<V; i++){
            if(!vis[i]){
                if(dfs(i, -1, vis, adj)) return true;
            }
        }
        return false;
    }
};
*/