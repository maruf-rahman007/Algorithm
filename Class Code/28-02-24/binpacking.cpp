#include<bits/stdc++.h>

using namespace std;

int main()
{
    int weights[] = {2,5,4,7,1,3,8};
    int n = 7;
    int cap = 10;
    int cnt = 0;
    int rem_weignt = 10;
    for (int i = 0; i < n; i++)
    {
        if(weights[i]>rem_weignt)
        {
            cnt++;
            rem_weignt = cap - weights[i];
        }
        else
        {
            rem_weignt-=weights[i];
        }
    }
    cout<<cnt<<" "<<endl;
    
    return 0;
}
