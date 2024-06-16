//? Two methods two represent graphs
//* Adjacency Matrix

/*
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int graph[N][N]; // global variable is already zero

int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}

Drawbacks :
O(N^2) -->space complexity
N <= 10^3
*/


//* Adjacency List
// O(N+M) -> space complexity
// O(2E)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

vector<int> graph2[N]; // Array of vectors
// we have made N number of vectors

int main()
{
    int n, m; 
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
/*
N < 10^3, E < 10^7
*/
 
//* For weighted graphs we will use pairs
    // vector<pair<int><int>> graph[N]
    //graph2[v1].push_back({v2, wt});
    //graph2[v2].push_back({v1, wt});

//* If we want to find is the given edge is present or not
/* 
In matrix
directly O(1)
if(graph1[i][j] == 1) cout << "connected";

In List
O(n)
for(auto it : graph2[i]){
    if(it == j) cout << "connected"
}

*/