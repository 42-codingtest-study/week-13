// 그래픽스 퀴즈
// https://www.acmicpc.net/problem/2876

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long
int dp[6] = {0, 0, 0, 0, 0, 0};
int main() {
    fast;
    int N;
    cin >> N;
    int a, b;
    int m = 0, grade;
    for (int i = 0; i < N; ++i) {
        cin >> a >> b;
        if (b < a) {
            int tmp = b;
            b = a;
            a = tmp;
        }
        for (int j = 1; j < 6; ++j) {
            if (j == a || j == b) dp[j]++;
            else dp[j] = 0;
        }
        if (dp[a] > m) {
            m = dp[a];
            grade = a;
        }
        if (dp[b] > m) {
            m = dp[b];
            grade = b;
        }
    }
    cout << m << " " << grade;
}
