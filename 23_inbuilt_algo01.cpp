#include<bits/stdc++.h>
using namespace std;

// TC => O(n)

int main(){
    int n; 
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // auto it = min_element(v.begin(), v.end());
    // cout << *it;

    //or
//* min element
    int min = *min_element(v.begin()+2, v.end());
    cout << min << endl;

//* max element
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

//* sum
    int sum = accumulate(v.begin(), v.end(),0);
    cout << sum << endl;

//* cout of a particular element
    // int ct = cout(v.begin(), v.end(), 4);
    // cout << ct << endl;

//*finding a element; returns iterator
    auto it = find(v.begin(), v.end(),5);
    if (it != v.end())
    {
        cout << *it << endl;
    }
    else cout<< "Element not found" << endl;
    
//* reverse (string me kaam ayega)
    reverse(v.begin(),v.end());
    for(auto val : v){
        cout << val << " ";
    }
}