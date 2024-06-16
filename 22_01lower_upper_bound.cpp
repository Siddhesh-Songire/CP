// Can be used only when array or vector is sorted
// T.C => O(log(n))
/*
lower_bound(nums.begin(), nums.end(), X) -> returns iter of first value that is >= X.
upper_bound(nums.begin(), nums.end(), X) -> returns iter of first value that is > X
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a+n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int *ptr = lower_bound(a,a+n,32); //in case of array it returns pointer
    cout<<*ptr;
    cout<<endl;

    int *ptr3 = lower_bound(a,a+n,30); //if value is not present then it returns next greater value
    cout<<*ptr3;
    cout<<endl;

    int *ptr2 = upper_bound(a,a+n,32);
    if(ptr2 == a+n) cout << "not found";
    else cout<<*ptr2;
    
}