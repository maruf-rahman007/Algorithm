#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = 128;
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s[i]!='\0'; i++)
    {
        freq[s[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (freq[i]>0)
        {
            cout<<(char)i<<" "<<freq[i]<<endl;
        }    
    }
    return 0;
}