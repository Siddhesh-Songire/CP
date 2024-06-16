// https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prerequisite-tasks

//* Easy using TOPO sort
/*
class Solution
{
  public:
    vector<int> findOrder(int N, int m, vector<vector<int>> prerequisites)
    {
        vector<int> adj[N];
        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }

        vector<int> v;
        int ind[N] = {0};
        for(int i = 0; i<N; i++){
            for(auto it : adj[i]) ind[it]++;
        }

        queue<int> q;

        for(int i = 0; i<N; i++){
            if(ind[i] == 0) q.push(i);
        }

        while(!q.empty()){
            int x = q.front();
            q.pop();
            v.push_back(x);

            for(auto it : adj[x]){
                ind[it]--;
                if(ind[it] == 0) q.push(it);
            }
        }

        if(v.size() == N) return v;
        else return {};
    }
};*/

