#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {   
        int x;
        cin >> x;
        s.insert(x);
    }
    
    // sort(a, a+n); sets and maps are already sorted

    auto it = s.lower_bound(5);  // in case of sets
    
    cout << *it;



    // int *ptr2 = upper_bound(a,a+n,32);
    // if(ptr2 == a+n) cout << "not found";
    // else cout<<*ptr;
    
}