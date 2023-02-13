// 카드 구매하기
// https://www.acmicpc.net/problem/11052

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    vector<int> card;
    int c;
    cin >> N;
    card.push_back(0);
    for (int i = 0; i < N; ++i) {
        cin >> c;
        card.push_back(c);
    }
    long dp[10001];
    dp[0] = 0;
    long tmp = 0;
    for (int i = 1; i <= N; ++i) {
        dp[i] = card[i] * (N / i);
        if (N % i != 0) {
            long tmp2 = 0;
            int idx = 0;
            for (int j = 1; j < N % i; ++j) {
                if (card[j] * ((N % i) / j) > tmp2) {
                    tmp2 = card[j] * ((N % i) / j);
                    idx = j;
                }
            }
            dp[i] += tmp2;
        }
        if (dp[i] > tmp)
            tmp = dp[i];
        cout << dp[i] << " ";
    }
    cout << "\n" << tmp;
}
