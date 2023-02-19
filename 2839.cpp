// 설탕 배달
// https://www.acmicpc.net/problem/2839

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

int N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    int n5 = N / 5;
    while (1) {
        if ((N - 5 * n5) % 3 == 0)
            break;
        n5--;
        if (n5 < 0)
            break;
    }
    int n3 = (N - 5 * n5) / 3;
    if (n5 < 0)
        cout << -1;
    else
        cout << n5 + n3;
    return 0;
}
