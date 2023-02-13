// 카드 구매하기
// https://www.acmicpc.net/problem/11052

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int Card[10001];
int DP[10001];

int _max(int a, int b) {
    return (a > b) ? a : b;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for (int i = 1; i <= N; ++i)
        cin >> Card[i];
    DP[0] = Card[0] = 0;
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= i; ++j)
            DP[i] = _max(DP[i], DP[i - j] + Card[j]);
    cout << DP[N];
}
