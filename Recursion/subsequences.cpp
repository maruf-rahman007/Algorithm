#include <bits/stdc++.h>

using namespace std;

void subSequences(int idx,vector<int> &ds, int arr[], int n)
{
    if (idx == n){
        for(auto it : ds){
            cout<< it <<" ";
        }
        cout << endl;
        return;
    }
    // take the perticular index in the sub sequences 
    ds.push_back(arr[idx]);
    subSequences(idx+1,ds,arr,n);
    ds.pop_back();

    // not take the perticular index in the sub sequences 
    subSequences(idx+1,ds,arr,n);
}

int main()
{
    int n;
    int arr[] = {3,1,2};
    n = 3;
    vector<int> ds;
    subSequences(0,ds,arr,n);
    return 0;
}

/*
Time Complexity -> O(2^n * n) exponential in nature
Space Complexity -> O(n)
*/