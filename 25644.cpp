// 최대 상승
// https://www.acmicpc.net/problem/25644

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0)
#define ll long long

int main() {
    fast;
    int N;
    cin >> N;
    vector <int> ANA;
    int tmp;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        ANA.push_back(tmp);
    }
    int m = 0, min = ANA[0];
    for (int i = 1; i < N; ++i) {
        if (ANA[i] < min) min = ANA[i];
        if (m < ANA[i] - min)
            m = ANA[i] - min;
    }
    cout << m;
}
