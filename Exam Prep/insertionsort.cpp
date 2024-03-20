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

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}