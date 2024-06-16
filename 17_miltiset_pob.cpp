#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n ,k;
        cin >> n >> k;
        multiset<long long> bags;
        while (n--)
        {
            long long candy;
            cin >> candy;
            bags.insert(candy);
        }
        
        long long max_can = 0;
        while(k--){
            auto last_can = --bags.end();
            max_can += *last_can;

            long long k = *last_can/2;

            bags.insert(k);

            bags.erase(last_can);
        }

        cout<<max_can<<endl;
    }
}