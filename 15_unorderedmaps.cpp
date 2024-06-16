//* Unordered maps implemennted using hash table
//unsorted unique keys..different keys can point to same value..O(1)..hashing...u cannot use it for complex data type like pair,set..
// unordered map have time complexity of O(1) for find, erase ,
// inset operation 
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string> m;
    m[1] = "abc";   // O(1)
    m[5] = "scs";
    m[3] = "kjd";
    m[4] = "sdd";
cout<<m[1];
    for(auto pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}

//