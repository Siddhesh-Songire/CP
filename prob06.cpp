//* Help joe

#include<bits/stdc++.h>
using namespace std;
int hsh[26]; 

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        hsh[s[i] - 'a']++;
    }
    
    int q;
    cin>>q;

    while (q--)
    {
        int n;
        cin>>n;
        bool flag;
        int ct;
        while (n--)
        {   
            char ch;
            cin>>ch;
            bool flag = false;
            int ct = 0;
            for (int i = 0; i < 26 ; i++)
            {
                if (hsh[ch - 'a'] % 2 == 0 || hsh[ch - 'a'] == 1)
                {
                    flag = true;
                    ct += hsh[ch - 'a'];
                    cout<<ct;
                }
            }

            int oddCt = 0;
            for (int i = 0; i < 26; i++)
            {
                if(hsh[i] % 2 != 0) oddCt++;
            }
            
            if(oddCt > 1) cout << "NO\n";
            else cout << "YES\n" ;
            
        }

        // if(flag) cout<<ct;
        
    }


}