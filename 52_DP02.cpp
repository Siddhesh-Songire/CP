//* Frog 1

// Simple recursion solution
/*
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int dp[N];
int min_cost(int i ,int arr[]){
    if(i==0) return 0;
    if(i==1) return abs(arr[i] - arr[i-1]);

    if(dp[i] != -1) return dp[i];

    int c1 = min_cost(i-1,arr) + abs(arr[i] - arr[i-1]);

    
    int c2 = min_cost(i-2,arr) + abs(arr[i] - arr[i-2]);

    return dp[i] = min(c1,c2);
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << min_cost(n-1, arr);
}*/

//* Frog 2

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int k;

int dp[N];
int min_cost(int i ,int arr[]){
    if(i==0) return 0;
    if(i==1) return abs(arr[i] - arr[i-1]);

    if(dp[i] != -1) return dp[i];
    int c1 = INT_MAX;
    for(int j = 1; j<=k; j++){
        c1 = min(c1, min_cost(i-j,arr) + abs(arr[i] - arr[i-j]));
    }


    return dp[i] = c1;
}

int main(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;


    cin >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << min_cost(n-1, arr);
}