// https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int  n , cows;
int position[N];

bool canPlaceCows(int d){
    int lastPos = -1;
    int cows_ct = cows;
    for (int i = 0; i < n; i++){
        if(position[i] - lastPos >= d || lastPos == -1){
            cows_ct--;
            lastPos = position[i];
        }
        if(cows_ct == 0) break;
    }
    return (cows_ct == 0);

}

int main(){
    cin >> n >> cows;
    for (int i = 0; i < n; i++)
    {
        cin >> position[i];
    }

    sort(position, position+n);
    // T T T (T) F F F F
    int lo = 0, hi = 1e9, mid;
    while(hi - lo > 1){
        mid = (lo + hi) / 2;
        if(canPlaceCows(mid)) lo = mid;
        else hi = mid - 1;
    }
    if(canPlaceCows(hi)) cout << hi;
    else cout << lo;
    
}