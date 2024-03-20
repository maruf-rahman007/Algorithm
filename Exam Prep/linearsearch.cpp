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

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            cout<<"Item found at index : "<<i<<endl;
            return 0;
        }
    }
    cout<<"Item not found in array "<<endl;
    
    return 0;
}