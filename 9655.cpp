// 돌 게임
// https://www.acmicpc.net/problem/9655

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    (N % 2 == 0) ? cout << "CY" : cout << "SK";
    return 0;
}
