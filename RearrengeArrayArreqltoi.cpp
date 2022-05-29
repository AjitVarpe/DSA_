// Ques : Rearrange an array such that arr[i] = i
// Given an array of elements of length N, ranging from 0 to N – 1.
//  All elements may not be present in the array. If the element is not 
//  present then there will be -1 present in the array. Rearrange the array 
//  such that A[i] = i and if i is not present, display -1 at that place.


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Array Size :- ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Array :- " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i])
        {
            arr[i] = -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}