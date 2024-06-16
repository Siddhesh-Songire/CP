// pass by reference or reference variable
// pass by reference can be done for all datatype
// Array is always passed by reference and we need not add & 

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b= temp;
}

void func(int a[]){  // we don't need to define size for 1d array
    a[0] = 2;
}

int main(){
    int a = 3;
    int b = 5;
    
    cout<<a<<" "<<b<<endl;  // 3 5
    swap(a,b);
    cout<<a<<" "<<b<<endl;  // 5 3

    int arr[10];
    arr[0] = 1;
    cout<<arr[0]<<endl; // 1

    func(arr);
    cout<<arr[0]<<endl; // 2
    
}