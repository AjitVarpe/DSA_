#include<bits/stdc++.h>
#include<limits>
#include<String>
using namespace std;

int main(){
    int count;
    cout<<"Enter the Size of Array : ";
    cin>>count;
    int arr[count],temp[count];

    cout<<"Enter the Element : ";
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    int n=count;
    for (int i = 0; i < count; i++)
    {
        if(i%2==0){
            temp[i]=arr[n-1-i];
        }else{
            temp[i]=arr[i+1];
        }
    }
    for (int i = 0; i < count; i++)
    {
        cout<<temp[i]<<", ";
    }
    return 0;
}