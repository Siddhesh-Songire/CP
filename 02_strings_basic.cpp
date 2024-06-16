#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = "World";

    string str = s1 + s2;
    cout << str << endl;  // concatination
    
    cout << str.size() << endl; // 10

    // Iterating throough string
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    cout << endl;
    // It directly compares
    if (s1 == s2)
    {
        cout << "Equal";
    }
    else{
        cout << "Not Equal";
    }
    

}