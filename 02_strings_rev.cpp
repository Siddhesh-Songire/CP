// reverse a string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string srev;
    for (int i = s.length()-1; i >= 0; i--)
    {
        srev.push_back(s[i]); // O(1)  //srev = srev + s[i]  O(s.size())
    }
    cout<<srev;
    
}