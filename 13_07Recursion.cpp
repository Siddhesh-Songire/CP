//* Print any one subsequence whose sum is k;
#include<bits/stdc++.h>
using namespace std;

bool print_sub(int i, int arr[], vector<int> &ds, int sum,int req_sum, int n){

    if(i == n){
    if(sum == req_sum){
        for(auto it: ds){
            cout << it << " ";
        }
        cout<<endl;
        return true;
    }
    return false;
    }

    ds.push_back(arr[i]);
    sum += arr[i];

    if(print_sub(i+1, arr, ds,sum, req_sum,n) == true) return true;

    sum -= arr[i];
    ds.pop_back();

    if(print_sub(i+1, arr, ds,sum, req_sum,n)) return true;

    return false;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int req_sum = 2;
    vector<int> ds;
    print_sub(0,arr,ds,0,req_sum,n);
}