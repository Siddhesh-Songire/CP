//* https://www.spoj.com/problems/EKO/ 
//! Advanced Binary Search with Predicate Function
#include <bits/stdc++.h>
using namespace std;

// global hi declare kar diya taki function me pass naa karna pade
const int N = 1e6 + 10;
int n;
long long m; // requred amount of wood;
long long trees[N];

//predicate function
bool isWoodSufficient(int h){
    long long wood = 0;
    for(auto it : trees){
        if(it >= h) wood += (it - h);
    }
    return wood >= m;
}

int main(){
   cin >> n >> m;
   for (int i = 0; i < n; i++)
   {
    cin >> trees[i];
   }

   long long lo = 0, hi = 1e9 , mid;
    // T T T T T F F F F 
    // Binary search
    while(hi - lo > 1){
        mid = (lo + hi)/2;
        if(isWoodSufficient(mid)) lo = mid;
        else hi = mid - 1;
    }
    if(isWoodSufficient(hi)) cout << hi;
    else cout << lo;
}
// TC -> O(Nlog(h))