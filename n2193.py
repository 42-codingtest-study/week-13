# <다이나믹 프로그래밍>
# 2193
# 이친수
# https://www.acmicpc.net/problem/2193

import sys
input = sys.stdin.readline

n = int(input())

# n = 1: 1
# n = 2: 10
# n = 3: 100, 101
# n = 4: 1010, 1000, 1001 (n = 2 + n = 3)
pinary = [1, 1, 2]

for i in range(3, n):
    pinary.append(pinary[i - 2] + pinary[i - 1])

print(pinary[n - 1])
