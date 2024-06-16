//* Check if a string is palindrom using recursion;

#include <bits/stdc++.h>
using namespace std;
bool palindrom_check(string &s, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
        return false;
    return palindrom_check(s, i + 1, n); // return likhna padega non void function hai
}
int main()
{
    string s = "MADkM";
    int i = 0;
    int n = s.size();
    cout << palindrom_check(s, i, n);
}

bool check_pal(string s, int i, int n)
{
    if (i >= n / 2)
        return true;

    if (s[i] != s[n - i - 1])
        return false;

    return check_pal(s, i + 1, n);
}
