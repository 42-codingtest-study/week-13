// 이친수
// https://www.acmicpc.net/problem/2193

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
    cin >> N;
    long long ans[91];
    memset(ans, 0, sizeof(long long) * 91);
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 1;
    ans[3] = 2;
    ans[4] = 3;
    for (int i = 5; i <= 90; ++i) {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    cout << ans[N];
}
