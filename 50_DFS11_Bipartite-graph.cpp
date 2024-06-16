//* Bipartite Graph
/*
class Solution
{
public:
    bool isbp(int st, int V, vector<int> adj[], int vis[])
    {
        queue<int> q;
        q.push(st);
        vis[st] = 0;

        while (!q.empty())
        {
            int x = q.front();
            q.pop();

            for (auto it : adj[x])
            {
                if (vis[it] == -1)
                {

                    // vis[it] = (vis[x] == 0) ? 1 : 0 ;
                    vis[it] = !vis[x];
                    q.push(it);
                }
                else if (vis[it] == vis[x])
                    return false;
            }
        }
        return true;
    }

    bool isBipartite(int V, vector<int> adj[])
    {

        int vis[V];
        for (int i = 0; i < V; i++)
        {
            vis[i] = -1;
        }

        for (int i = 0; i < V; i++)
        {
            if (vis[i] == -1)
            {
                if (isbp(i, V, adj, vis) == false)
                    return false;
            }
        }
        return true;
    }
};

//* Using DFS

class Solution {
public:
    bool dfs(int i, int V, vector<int>adj[], int vis[]){

        for(auto it : adj[i]){
            if(vis[it] == -1){
                vis[it] = !vis[i];
                if(dfs(it, V, adj, vis) == false) return false;
            }
            if(vis[it] == vis[i]) return false;
        }
        return true;
    }

    bool isBipartite(int V, vector<int>adj[]){
        int vis[V];
        for(int i=0; i<V; i++) vis[i] = -1;

        for(int i=0; i<V; i++){
            if(vis[i] == -1){
                vis[i] = 0;
                if(dfs(i, V, adj, vis) == false) return false;
            }
        }
        return true;


    }

};
*/