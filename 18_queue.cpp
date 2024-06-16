#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("gfg");
    q.push("etr");
    q.push("vxv");
    q.push("grs");
    
    while (!q.empty())
    {
        cout<< q.front() <<endl;   //queue me front hota hai top nahi
        q.pop();
    }
    
}