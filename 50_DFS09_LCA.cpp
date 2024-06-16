//* Lowest Common Ancestor(LCA)
//! TC => O(N)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> g[N];
int par[N]; // for storing parent of each node/vertex

void dfs(int vertex,int parent = -1){
    par[vertex] = parent; // parent is stored
    for(int child: g[vertex]){
        if(child == parent) continue;
        dfs(child,vertex);
    }
}

// path function for storing path of a node
vector<int> path(int v){
    vector<int> ans;
    while(v != -1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end()); 
    return ans;
    
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    
    dfs(1);

// Taking inputs of 2 nodes of which we have to fing LCA
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> path_n1 = path(n1); // passing in path function to find path and storig it in a vector
    vector<int> path_n2 = path(n2);


// Finding the commmon between both paths or vector and where parents are different we simply break
    int mn_ln = min(path_n1.size(), path_n2.size());
    int lca = -1;
    for (int i = 0; i < mn_ln; i++)
    {
        if(path_n1[i] == path_n2[i]) lca = path_n1[i];
        else break;
    }
    cout << lca;
    

    
}