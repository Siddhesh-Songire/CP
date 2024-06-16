//! Incomplete
//? T.C => O(n log(n)) where n is addition of sizes of merged array
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

void merge(int l , int r , int mid){
    //fist we are derclaring two array and then we can merge them together 
    int l_sz = mid - l + 1;
    int L[l_sz + 1];
    int r_sz = r - (mid+1) +1;
    int R[r_sz +1];

    for (int i = 0; i < l_sz; i++)
    {
        L[i] = a[i+1];
    }
    for (int i = 0; i < r_sz; i++)
    {
        R[i] = a[i+mid+1];
    }
    L[l_sz] = R[r_sz] = INT_MAX;
    
    for (int i = l; i <= r; i++)
    {
        /* code */
    }
    

    
}


int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
}