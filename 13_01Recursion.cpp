// Recurtion factorial of n

#include <bits/stdc++.h>
using namespace std;

// int fact(int n)
// {
//     if (n == 0) // Base condition
//         return 1;
//     return n * fact(n - 1);
// }

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        // cout << 1;
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    // cout << fact(n);
    cout << fib(n);
}

/*
! Time Complexity of recursion
1. Number of function calls -> n;
2. What is time complexity of each fuction -> O(1)
*/

// Printing fibonacci

// int fib(int n){
//     if(n == 0 || n == 1){
//         cout << 1 ;
//         return 1;
//     }

//     int x = fib(n-1) + fib(n-2);
//     cout << x;

// }
