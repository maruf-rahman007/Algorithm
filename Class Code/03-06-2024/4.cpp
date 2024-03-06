#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    string finalStr;
    int i = 0;
    while (s1[i]!='\0')
    {
        finalStr+= s1[i];
        i++;
    }
    int j = 0;
    while (s2[j]!='\0')
    {
        finalStr+=s2[j];
        i++;
        j++;
    }
    cout<<finalStr<<endl;
    return 0;
}   