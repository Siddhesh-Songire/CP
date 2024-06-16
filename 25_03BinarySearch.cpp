//* Advanced Binary Search with Predicate Function

// Predeicate funtion -> function which returns true or false 

// https://leetcode.com/problems/find-the-duplicate-number/solution/

#include <bits/stdc++.h>
using namespace std;

int count(int ele, vector<int> & v){
    int ct = 0;
    for(auto it: v){
        if(it <= ele) ct++;
    }
    return ct;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int low = 1, high = n;
    while(high - low > 1){
        int mid = (low + high)/2;
        if(count(mid, v) >  mid){
            high = mid;
        }
        else low = mid + 1;
    }
    // cout << low << " " << high;
    if(count(low,v) > low) cout << low;
    else cout << high;
    
}