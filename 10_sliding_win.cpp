/*Given an array of integers Arr of size N and a number K. 
Return the maximum sum of a subarray of size K.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    int k;
    cin>>k;

    // int sum = 0;
    // int ans = INT_MIN;
    
    // for (int i = 0; i < n-k + 1; i++)
    // {   sum = 0;
    //     for (int j = i; j < k+i; j++)
    //     {
    //         sum += arr[j];
            
    //     }
        
    //     ans = max(sum,ans);
        
    // }
    // cout<<ans;


    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < k; i++)
        {
            sum += arr[i];
            
        }
    ans = max(ans,sum);

    for (int i = 1; i < n-k; i++)
    {
        sum -= arr[i];
        sum += arr[i+k];
        ans = max(ans,sum);
        cout<<ans<<" ";
    }
    
    cout<<ans;
}