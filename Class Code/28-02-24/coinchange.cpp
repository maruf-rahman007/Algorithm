#include <bits/stdc++.h>
using namespace std;



int main()
{
    int given = 100;
    int bil = 65;
    int backAmount = given - bil;
    int denomination[] = {1, 5, 10, 25};
    int n = 4;
    sort(denomination, denomination + n);

    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {

        while (backAmount >= denomination[i])
        {
            backAmount -= denomination[i];
            ans.push_back(denomination[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
