//* Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.

/*
class Solution
{
    public:
    void dfs(int i, int vis[], vector<int> adj[], stack<int> &st){
        vis[i] = 1;
        for(auto it : adj[i]){
            if(vis[it] == 0){
                dfs(it, vis, adj, st);

            }
        }
        st.push(i);

    }
    //Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        stack<int> st;
        for(int i = 0; i<V; i++){
            if(vis[i] == 0){
                dfs(i, vis, adj, st);

            }
        }

        vector<int> v;
        while(!st.empty()){

            v.push_back(st.top());
            st.pop();
        }

        return v;
    }
};
*/