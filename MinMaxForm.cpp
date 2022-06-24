#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
void rearrenge(int arr[], int count)
{
    int temp[count];
    int min = 0, max = count - 1;
    bool flag = true;
    for (int i = 0; i < count; i++)
    {
        if (flag)
        {
            temp[i] = arr[max--];
        }
        else
            temp[i] = arr[min++];
        flag = !flag;
    }
    for (int i = 0; i < count; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int count;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    rearrenge(arr, count);
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}