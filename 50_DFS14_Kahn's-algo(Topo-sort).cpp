//*Topological sort
/*
class Solution
{
public:
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        int indg[V] = {0};
        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                indg[it]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indg[i] == 0)
                q.push(i);
        }

        vector<int> v;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            v.push_back(node);

            for (auto it : adj[node])
            {
                indg[it]--;
                if (indg[it] == 0)
                    q.push(it);
            }
        }

        return v;
    }
};
*/