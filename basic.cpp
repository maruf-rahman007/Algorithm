#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
void recursion(int n)
{
    if (cnt == n)
        return;
    cout << cnt << " ";
    cnt++;
    recursion(n);
}

int main()
{

    recursion(5);

    return 0;
}