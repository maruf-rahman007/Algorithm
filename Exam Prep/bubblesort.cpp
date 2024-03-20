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
        bool flag = false;
        for (int j = 1; j < n-i; j++)
        {
            if(arr[j-1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                flag = true;
            }
        }
        if(!flag) break;
    }
    
    for(auto it : arr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}