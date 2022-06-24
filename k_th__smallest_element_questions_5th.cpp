#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    int key;
    cin >> key;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << arr[key-1];
    return 0;
}