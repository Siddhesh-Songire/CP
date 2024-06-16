/* known as intro sort the best sorting algorithm which includes 
quick sort, heap sort, and insertion sort

TC => O(n(log(n)))
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a , a+n);  //takes two parameters address of first element and add address of next of last element

/*
    incase of vectors it will be :
    sort(v.begin(), v.end( ))
*/
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    
}