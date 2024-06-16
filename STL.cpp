// Difference
#include<bits/stdc++.h>
using namespace std;

    void func(int n, vector<int>& v){
        v[0] = 5;
        for(auto it : v){
            cout << it << " ";
        }
        cout << endl;
    }
int main(){
    
    vector<int> vi(5,0);
    // for(auto it : v){
    //     cout << it;
    // }

    // pair<int ,string> vp = {1,"ssao"};  
    

    // vector<pair<int, string>> vp;
    // vp.push_back({1, "sdf"});
    // vp.push_back({2, "ssadf"});

    // for(auto it : vp){
    //     cout << it.first <<' ' << it.second << endl;
    // }

    // vector<vector<int>> vv;
    // vector<vector<int>> vv(5, vector<int>(5, 10));


    func(5, vi);
    // cout << vi[0];


    map<int, string> mp;
    mp[51] = "mahesh";
    mp[53] = "r";
    mp[54] = "s";

    for(auto it : mp){
        cout << it.first <<' ' << it.second << endl;
    }


    
}
// vector delare loop, push , pop, sort, traverse
// pair
// vector initialy 0
// vector<vector<int>> dist(n, vector<int>(m, 1e9));


/*
//* NEsting in vectors 
Vectors of pair ->  vector<pair<int,int>> v 
Arrays of vector -> vector<int> v[N]
Vector of vector -> vector<vector<int>> v

*/


// maps O(log(n))
// unordered_map 




// set 
// unordered_set
// multiset