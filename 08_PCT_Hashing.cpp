//* Pre-Computation Techniques Basics & Hashing 
/*
Given T test case and in each test case a number N. Print its factorial for
each test case % M
where M = 10^9 + 7.

Constraints 
1 <= T <= 10^5
1 <= N <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];
int main()
{   
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i-1]*i;
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // long long fact = 1;
        // for (int i = 2; i <= n; i++)
        // {
        //     fact = (fact * i) % M;
        // }
        // TC => O(T*N) = 10^10 ; now it will give TLE error as code will not run in 1sec
        cout << fact[n] << endl;
    }
}

// To solve this we will use PCT we will calculate each value before and will store it in array
// Now TC => O(N) + O(T)