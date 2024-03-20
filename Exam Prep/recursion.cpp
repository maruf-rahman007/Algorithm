#include<bits/stdc++.h>

using namespace std;

void subsequence(int idx, vector<int>&ds,vector<int>arr,int n)
{
    if(idx == n)
    {
        for(auto it : ds)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
        return;
    }
    ds.push_back(arr[idx]);
    subsequence(idx+1,ds,arr,n);
    ds.pop_back();
    subsequence(idx+1,ds,arr,n);
}


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
    int num ;
    cin>>num;
    vector<int>ds;
    subsequence(0,ds,arr,num);
    
    return 0;
}