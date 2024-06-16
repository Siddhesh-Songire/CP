/*
* --------Maps-------------
key : value  pair and stored in order according to keys
different keys can point to same value..O(log n)..red black tree
*/

#include <bits/stdc++.h>
using namespace std;
void printmap(map<int, string> &m)
{
    cout << m.size() << endl;

    for (auto pr : m)
    { // n(log(n))
        cout << (pr).first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "scs";
    m[3] = "kjd";

    m.insert({4, "afg"});

    printmap(m);

    auto it = m.find(5); // it returns iterator //O(log(n))

    if (it == m.end())
        cout << "NO value";
    else
        cout << (*it).first << " " << (*it).second << endl;

    m.erase(3); // O(log(n))
    printmap(m);

    if (m.count(5)) // returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
        cout << "present";

    m.clear(); // clears map and clear() is used for all StL containers;
}
// write code to add two numbers in c++ 