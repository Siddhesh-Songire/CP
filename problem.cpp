//*The Monk and Class Marks
//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
/*
Problem
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes, he is still in love with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks. And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the number of students. N lines follow, which contain a string and an integer, denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string>a, pair<int,string>b){
	if(a.first != b.first)
		return a.first > b.first;
	else
		return b.second > a.second;
}

int main(){
    int n ;
    cin >> n;

    vector<pair<int, string>> a(n);
    for(int i =0; i<n; i++){
		cin>> a[i].second >> a[i].first ;
    }

	sort(a.begin(), a.end(), cmp);
	    for(int i = 0; i<n ; i++){
        cout << a[i].second <<" "<< a[i].first << endl;
    }
}