//* Fibonacci using recurssion
// 0 1 1 2 3 5
// Using dp Time complexity is reduced from O(2^n) -> O(n)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[N];

//? TOP DOWN Approach
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    if(dp[n] != -1) return dp[n]; // memoise

    //else
    return dp[n] = fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp)); // assigning all values of dp[] -1

    cout << fib(n);

}