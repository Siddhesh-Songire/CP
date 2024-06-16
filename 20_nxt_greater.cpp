// It can be easily implemented using two for loop nut TC eill be O(N^2)
// but using stack it will be of TC O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            /* code */
        }
        
    }
    
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    NGE(v);
    
}