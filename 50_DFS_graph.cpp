//* Depth First Search (Graph )

//! Graph
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<int> g[N];  // graph input 

bool vis[N];      // visited array

//* DFS function
void dfs(int vertex){
    /*Take action on vertex
        after entering the vertex*/
    cout << vertex << endl;
    vis[vertex] = true;

    for(int child: g[vertex]){
        cout << "par" << vertex << " ,Child " << child << endl;
       
        if(vis[child]) continue;
        /*Take action on child
        before entering the child node*/
        dfs(child);
        /* Take action on child
        after exiting child node */
    }
    /* Take action on vertex 
        before exiting the vertex */
}

int main (){

//* Taking input 

    int n,m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    dfs(1);

    
}


// TC => O(V + E)