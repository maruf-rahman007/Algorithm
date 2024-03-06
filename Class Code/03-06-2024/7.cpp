#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size()-1; i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (s[j]<s[j-1])
            {
                char temp = s[j];
                s[j] = s[j-1];
                s[j-1]=temp;
            }
            
        }
        
    }
    cout<<s<<endl;
    return 0;
}