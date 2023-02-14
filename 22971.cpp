// 증가하는 부분 수열의 개수
// https://www.acmicpc.net/problem/22971

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

ll N, Arr[5001], DP[5001];

int main() {
    fast;
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> Arr[i];
    for (int i = 0; i < N; ++i)
        DP[i] = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = i; j > -1; --j) {
            if (Arr[j] < Arr[i])
                DP[i] += DP[j];
        }
        DP[i] %= 998244353;
    }
    for (int i = 0; i < N; ++i)
        cout << DP[i] << " ";
}
