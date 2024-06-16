// Vectors are dynamic arrays. They have the ability to
// resize itself when it gets filled.
// https://drive.google.com/file/d/1nUEkGmqG0KLMLzsDN_JDwXj9ZPFT4d74/view
#include <iostream>
#include<vector>   // ---> need to inlude this header file
using namespace std;
int main()
{
    // Syntax
    // vector<data_type> name(size, value);
    vector<int> v;
    // vector<string> v;
 
    // Taking input and put it on end of vector

    int n; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {   int x;
        cin >> x;
        v.push_back(x);
    }

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // v.pop_back();

    // Printing output
    // Method 1
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"\t";
    }

    cout<<endl;

    // Method 2 (using iterator)
    vector<int>::iterator it;
    for ( it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;


    // Method 3(Range based loop)
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    
    //Method 4  (auto keyword) replaciing method 2 and quite useful
    for(auto element:v){  // element is like variable for elements in vector v
        cout<<element<<"\t";
    }
    // auto automatically determines the data type


    v.pop_back();// 1 2

    vector<int> v2(3,50); // 50 50 50

    swap(v,v2);// elements in v and v2 are swap

    //--------------------------------------------------------
    
  

    return 0;
}