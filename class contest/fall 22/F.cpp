#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> sizes(N), values(N);
    for (int i = 0; i < N; ++i) {
        cin >> sizes[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> values[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= K; ++j) {
            if (sizes[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - sizes[i - 1]] + values[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[N][K] << " ";

    int total_values = 0;
    for (int i = 0; i < N; ++i) {
        total_values += values[i];
    }

    cout << total_values - dp[N][K] << endl;

    return 0;
}
