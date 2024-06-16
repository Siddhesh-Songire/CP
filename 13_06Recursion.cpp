//* Printing all the subsequence of a given sum(k);

#include<bits/stdc++.h>
using namespace std;

void print_sub(int i, int arr[], vector<int> &ds, int sum,int req_sum, int n){

    if(i == n){
    if(sum == req_sum){
        for(auto it: ds){
            cout << it << " ";
        }
        cout<<endl;
    }
    return;
    }

    ds.push_back(arr[i]);
    sum += arr[i];

    print_sub(i+1, arr, ds,sum, req_sum,n);

    sum -= arr[i];
    ds.pop_back();

    print_sub(i+1, arr, ds,sum, req_sum,n);

}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int req_sum = 2;
    vector<int> ds;
    print_sub(0,arr,ds,0,req_sum,n);
}