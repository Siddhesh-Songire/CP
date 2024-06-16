// To replace a multiple header file we can use <bits/stdc++.h>

/*

For bool 0 is considered as false and any other no other than 0 is true

when we take input in char it will always take only one value


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

bool a =120;
cout<<a<<endl; //1 for true

char ch = '9';  // here 9 is not integer it is character
cout<<ch<<" "<<(int)ch<<endl;
cout<<'c' + 1<<endl; // 99 + 1 = 100

// char c;
// cout<<"c: ";
// cin>>c;
// cout<<c;

cout<< 3/2<<" "<< 3/2.0 <<endl;  // 1 1.5
// calculation is done according to larger datatype

/* Range of datatypes
-10^9 < int > 10^9
-10^12 < long int > 10^12
-10^18 < long long int > 10^18

*/

// overflow

int x = 100000;
int y = 100000;
int z = x*y; 
cout<<z<<endl;  // this is overflow 
int mx =INT_MAX;
cout<<mx << endl;

  
// we should not use double or float bcoz it will give precision error
/* To slove this we can use long long int

 or 

we can do z = x * 1ll * y 
so that calculation will be in long long int 

*/

cout << x * 1ll * y;
    return 0;
}