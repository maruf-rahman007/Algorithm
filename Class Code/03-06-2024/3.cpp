#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    int j = s.size()-1;
    while (i<j)
    {
        if (s[i]==' ' || s[i]==',' || s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i]=='\'' || s[i]=='\"' || s[i]=='(' || s[i]==')' || s[i]=='[' || s[i]==']' || s[i]=='{' || s[i]=='}' || s[i]==':' || s[i]==';' || s[i]=='-' || s[i]=='_')
        {
            i++;
        }
        else if (s[j]==' ' || s[j]==',' || s[j]=='.' || s[j]=='!' || s[j]=='?' || s[j]=='\'' || s[j]=='\"' || s[j]=='(' || s[j]==')' || s[j]=='[' || s[j]==']' || s[j]=='{' || s[j]=='}' || s[j]==':' || s[j]==';' || s[j]=='-' || s[j]=='_')
        {
            j--;
        }
        else if (tolower(s[i])!=tolower(s[j]))
        {
            cout<<"Not a palindrome"<<endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}