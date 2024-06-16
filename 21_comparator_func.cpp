//Let say if we want to sort in decreasing order
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;  // return what you want
}

int main(){
    int n; 
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // sort(arr, arr+n); by default is in increasing order
    sort(arr, arr+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    

}
// For decreasing order we can use greater_INT which is inbuilt function in place of cmp.
