//* Modulo 10^9+7
//* https://www.geeksforgeeks.org/modulo-1097-1000000007/
//The reason of taking Mod is to prevent integer overflows.

/*
! Given a number N. Print its factorial.
Constraints
1 <= N <= 100
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long fact = 1;   // !order of 10^18
    for (int i = 2; i <= n; i++)
    {
        fact = fact*i;
    }
    cout<< fact;

! here fact will overflow from n = 21 therefore we use modulo to fit in size
}
*/


//* Print answer modulo M = 47

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int M = 47;
    long long fact = 1;   //order of 10^18
    for (int i = 2; i <= n; i++)
    {
        fact = (fact*i) % 47;
    }
    cout<< fact;


}