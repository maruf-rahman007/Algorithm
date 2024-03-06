#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[128];
    for (int i = 0; i < 128; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i]] ++;
    }
    int count = 0;
    for (int i = 0; i < 128; i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
}