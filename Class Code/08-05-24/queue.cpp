#include<bits/stdc++.h>

using namespace std;

int main()
{

    queue<int>q;
    int n;
    cin>>n;
    while (n--)
    {
        int num;
        cin>>num;
        q.push(num);
    }

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
    return 0;
}