// SET is a collection of keys and keys must be unique
// sorted unique values..no key..O(log n)..red black tree

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("abc");  // log(n)
    s.insert("fdsgd");
    s.insert("soff");

    for(auto it : s){
        cout<<it<<endl;
    }

    auto it = s.find("abc");  // O(log(n))  find operation return iterators of abc
    if(it != s.end()){   // if abc is not their then it returns next iterator of last iterator which is s.end()
        cout<<*it<<" ";
    }
cout << endl;
    s.erase("soff");
    for(auto it : s){
        cout<<it<<endl;
    }
    
}   

