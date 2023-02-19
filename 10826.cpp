// 피보나치 수 4
// https://www.acmicpc.net/problem/10826

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

string fsum(string a, string b) {
    int lenA = a.length(), lenB = b.length();
    if (lenA > lenB) {
        lenB++;
        b = "0" + b;
    }
    string ret = "";
    bool t = false;
    for (int i = lenA - 1; i >= 0; --i) {
        int tmp = (a[i] - '0') + (b[i] - '0');
        if (t)
            tmp++;
        if (tmp >= 10) {
            t = true;
            tmp -= 10;
        }
        else
            t = false;
        ret.insert(0, to_string(tmp));
    }
    if (t)
        ret.insert(0, "1");
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string fibo[10001];
    fibo[0] = "0";
    fibo[1] = fibo[2] = "1";
    for (int i = 3; i <= n; ++i)
        fibo[i] = fsum(fibo[i - 1], fibo[i - 2]);
    cout << fibo[n];
    return 0;
}
