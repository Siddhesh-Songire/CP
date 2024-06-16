#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &v, int ele){
    int lo = 0, hi = v.size()-1;
    int mid; 
    while(hi - lo >1){
        mid = (hi + lo) /2;
        if(v[mid] < ele){
            lo = mid + 1;
        }
        else hi = mid;
    }
    if(v[lo] >= ele) return lo;
    else if (v[hi] >= ele) return hi;
    else return -1;
}

int upper_bound(vector<int> &v, int ele){
    int lo = 0, hi = v.size()-1;
    int mid; 
    while(hi - lo >1){
        mid = (hi + lo) /2;
        if(v[mid] <= ele){  // change 
            lo = mid + 1;
        }
        else hi = mid;
    }
    if(v[lo] > ele) return lo;  // change
    else if (v[hi] > ele) return hi; // change
    else return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    
    int ele;
    cin >> ele;
    int lb = lower_bound(v , ele);
    cout << lb << endl;

    cout << upper_bound(v, ele);

}