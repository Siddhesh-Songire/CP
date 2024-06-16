//* Finding the no of connected components in a graph
// Hint : Calculate the number of times dfs will run that will be the answer

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> g[N];
bool vis[N + 1];

// storing each connected components
vector<vector<int>> ans;
vector<int> ds;

void dfs(int vertex)
{
    // cout << vertex << endl;

    vis[vertex] = true;
    ds.push_back(vertex);

    for (int child : g[vertex])
    {
        if (vis[child] == true)
            continue;

        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ct = 0;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        ds.clear();
        dfs(i);
        ans.push_back(ds);
        ct++;
    }

    cout << ans.size() << endl;

    for (auto it : ans)
    {
        for (int x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}