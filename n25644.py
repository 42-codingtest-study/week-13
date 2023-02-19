# <다이나믹 프로그래밍>
# 25644
# 최대 상승
# https://www.acmicpc.net/problem/25644

# 시간초과

import sys
input = sys.stdin.readline

n = int(input())

stock = list(map(int, input().split()))

benefit = []

for i in range(1, n):
    test = []
    for j in range(0, i):
        test.append(stock[i] - stock[j])

    benefit.append(max(test))

if all(num < 0 for num in benefit):
    print(0)
else:
    print(max(benefit))