#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int temp, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}