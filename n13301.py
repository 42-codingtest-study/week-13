# <다이나믹 프로그래밍>
# 13301
# 타일 장식물
# https://www.acmicpc.net/problem/13301

import sys
input = sys.stdin.readline

n = int(input())

dp = [0 for _ in range(n)]      # 타일 한 변의 길이

dp[0] = 1

if n != 1:
    dp[1] = 1

for i in range(2, n):
    dp[i] = dp[i - 1] + dp[i - 2]

round = [0 for _ in range(n)]
round[0] = 4

for i in range(1, n):
    round[i] = round[i - 1] + dp[i] * 2

print(round[n - 1])