/*
Given array a of N integers. Given Q queries and in each query
given L and R print sum of array elements from index L to R(L.R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
//! In prefix sum use 1 base array

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int n;
    cin>>n;
    int a[n];
    for (int i = 1; i <= n; i++)  //? starts from index 1
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int L ,R;
        cin>>L>>R;

        int long long sum = 0;
        for (int i = L; i <= R; i++)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    ? TC -> O(N) + O(Q*N) = 10^10 this will give TLE
    */


    int N= 1e5;
    int pf[N];  // prefix array
    pf[0] = 0;

    int n; 
    cin>>n;
    int a[n];
    for (int i = 1; i <= n; i++)  //? starts from index 1
    {
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int L ,R;
        cin>>L>>R;
        cout<< pf[R] - pf[L-1]<<endl;
    }
    //? TC -> O(N) + O(Q)
}