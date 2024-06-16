#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> g[N];
int depth[N];

void dfs(int vertex, int parent = -1){
    for(int child : g[vertex]){
        if(child == vertex) continue;

        depth[child] = depth[vertex] + 1; 
        dfs(child, vertex);
    }
}

int main (){
    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int x , y;
        cin >> x >> y;
        
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    int mx_depth = -1;
    cout << mx_depth;
    int mx_d_node;
    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }

    dfs(mx_d_node);
    
    for (int i = 1; i <= n; i++)
    {
        if (mx_depth < depth[i])
        {
            mx_depth = depth[i];

        }
        // mx_depth = max(mx_depth, depth[i]);
    }
    
    cout << mx_d_node << " " << mx_depth;
    
}