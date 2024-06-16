/* Multiset -> In multiset we can insert duplicates and 
values are stored in sorted order;
In place of priority queues we can use multiset

*/
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> s){
    for(auto val : s)
        cout << val << endl;
}

int main(){
    multiset<string> s;
    s.insert("abc");   //O(log(n))
    s.insert("sdf");
    s.insert("ewr");
    s.insert("abc");  // here abc will insert twice

    print(s);

    // If we want to remove 1 abc;
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);  //O(1)
    }
    cout<<endl;

    print(s);
    cout<<endl;

    // If we want to remove all abc
    s.erase("abc"); 
    print(s);

}