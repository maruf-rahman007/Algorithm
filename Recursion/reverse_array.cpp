#include <bits/stdc++.h>

using namespace std;

void reverseArray(int i, int arr[],int n)
{
    if (i >= n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(++i,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(0,arr,n);
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/