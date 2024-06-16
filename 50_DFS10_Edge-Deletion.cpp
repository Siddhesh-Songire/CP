#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> g[N];
int sub_sum[N];
int val[N];

void dfs(int vertex, int parent = -1){
    sub_sum[vertex] += val[vertex-1];  // val starts from index 1;
    for(int child: g[N]){
        if(child == parent) continue;
        dfs(child, vertex);
        sub_sum[vertex] += sub_sum[child];  // precomputing subtree sum;
    }
}

int main (){
    int n;
    cin >> n;

    //taking input of weights
    for (int i = 0; i < n-1; i++){
        cin >> val[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        int x , y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    long long ans = 0;
    for (int i = 2; i<=n; i++){
        int part1 = sub_sum[i];
        int part2 = sub_sum[1] - part1;
        ans = max(ans, (part1 * 1LL * part2));
    }
    cout << ans;
    
}