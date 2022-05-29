// Ques : Maximum sum of i*arr[i] among all rotations of a given array
// Given an array arr[] of n integers, find the maximum that 
// maximizes the sum of the value of i*arr[i] 
// where i varies from 0 to n-1.

#include <bits/stdc++.h>
#include <limits>
#include <String>
using namespace std;
int maxSum(int arr[], int count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        int SumOfCurrentItreation = 0;
        for (int j = 0; j < count; j++)
        {
            int index = (i + j) % count;
            SumOfCurrentItreation += j * arr[index];
        }
        result = max(result, SumOfCurrentItreation);
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter the Array Size :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Array :- " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Max Sum is  :-  " << maxSum(arr, n);

    return 0;
}