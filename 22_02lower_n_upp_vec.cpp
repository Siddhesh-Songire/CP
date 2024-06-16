#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    auto it = lower_bound(a.begin(), a.end(),32);// in case of vector it returns iterator
    cout<<*it;
    cout<<endl;

    auto it2 = upper_bound(a.begin(), a.end(),56);
    if(it2 == a.end()) cout << "not found";
    else cout<<*it2;
    
}