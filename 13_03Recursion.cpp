//* Reverse an array using recursion
#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverse_array(arr, l + 1, r - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int l = 0;
    int r = 4;
    reverse_array(arr, l, r);

    for (int i = 0; i <= r; i++)
    {
        cout << arr[i] << " ";
    }
}
