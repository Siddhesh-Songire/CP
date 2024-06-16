//* 322. Coin Change
//https://leetcode.com/problems/coin-change/

// #include<bits/stdc++.h>
// using namespace std;
// int dp[10010]; //
//     int func(int amount, vector<int>& coins){
//         if(dp[amount] != -1) return dp[amount]; //
//         if(amount == 0) return 0;
//         int ans = INT_MAX;
//         for(auto coin : coins){
//             if(amount - coin >= 0)
//             ans = min(ans + 0LL , func(amount - coin, coins) + 1LL);
//         }
//         return dp[amount] = ans; //
//     }

//     int coinChange(vector<int>& coins, int amount) {
//         int ans = func(amount, coins);
//         return (ans == INT_MAX) ? -1 : ans;

//     }
// int main(){ 
//     memset(dp, -1, sizeof(dp)); //
//     vector<int> coins  = {1,2,5};
//     int amount = 11;
//     cout << coinChange(coins, amount);

// }

//* 518. Coin Change II

#include<bits/stdc++.h>
using namespace std;
int dp[10010]; //
    int func(int amount, vector<int>& coins){
        // if(dp[amount] != -1) return dp[amount]; //
        if(amount == 0) {
            return 1;
        }
        int ans = 0;
        for(auto coin : coins){
            if(amount - coin >= 0)
            ans = ans + func(amount - coin, coins);
        }
        return ans; //
    }

    int change(int amount, vector<int>& coins) {
        int ans = func(amount, coins);
        return ans;
    }
int main(){ 
    memset(dp, -1, sizeof(dp)); //
    vector<int> coins  = {1,2,5};
    int amount = 5;
    cout << change(amount, coins);

}