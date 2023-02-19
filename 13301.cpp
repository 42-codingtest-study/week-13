// 타일 장식물
// https://www.acmicpc.net/problem/13301

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<unsigned long long> ans;
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(10);
    ans.push_back(16);
    ans.push_back(26);
    int N;
    cin >> N;
    for (int i = ans.size(); i < N + 1; ++i) {
        ans.push_back(ans[i - 1] + ans[i - 2]);
    }
    cout << ans[N - 1];
}
