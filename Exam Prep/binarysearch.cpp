#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int item;
    cin>>item;
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == item) 
        {
            cout<<"Item found at index : "<<mid<<endl;
            return 0;
        }
        if(arr[mid] > item)
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    
    cout<<"Item not found in array "<<endl;
    
    return 0;
}