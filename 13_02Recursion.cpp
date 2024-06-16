//* Print name N times using recursion

// #include<bits/stdc++.h>
// using namespace std;

// void print_names(int n){
//     if(n==0) return;
//     cout<<"name" << endl;
//     print_names(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     print_names(n);
// }

//* Print linerly from 1 to N using recursion

#include <bits/stdc++.h>
using namespace std;

void print_no(int n)
{
    if (n == 0)
        return;
    print_no(n - 1); // To print form N to 1 we just swap 25 and 26 line
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    print_no(n);
}
