// 동전 2
// https://www.acmicpc.net/problem/2294

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    vector<int> coin;
    cin >> n >> k;
    int c;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        coin.push_back(c);
    }
    sort(coin.begin(), coin.end());
    int dp[10001];
    memset(dp, 0, sizeof(int) * (10001));
    dp[0] = 0;
    for (int i = 1; i <= k; ++i) {
        dp[i] = 999999;
    }
    for (int i = 1; i <= k; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i - coin[j] >= 0) {
                int tmp = dp[i - coin[j]] + 1;
                if (tmp < dp[i])
                    dp[i] = tmp;
            }
        }
    }
    if (dp[k] == 999999)
        cout << -1;
    else
        cout << dp[k];
    return 0;
}
