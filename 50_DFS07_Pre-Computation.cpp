//* Print subtree sum of V, and number of even numbers in the subtree
// Precomputation

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> g[N];
int subtree_sum[N];
int even_ct[N];

void dfs(int vertex, int parent){
    if(vertex % 2 == 0){
        even_ct[vertex]++;
    }

    subtree_sum[vertex] = vertex;
    for(int child : g[vertex]){
        if(child == parent) continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child];

        even_ct[vertex] += even_ct[child];
    }
    // sum += vertex;
}

int main(){
    int n; // nodes
    cin >> n;

    //edges = n - 1;

    for (int i = 0; i < n-1; i++)
    {
        int x, y;
        cin >> x >> y;


        g[x].push_back(y);
        g[y].push_back(x);

        
    }
    dfs(1,0);

    cout << subtree_sum[5] << " " << even_ct[5];

    

}