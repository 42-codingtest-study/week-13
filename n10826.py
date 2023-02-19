# <다이나믹 프로그래밍>
# 10826
# 피보나치 수 4
# https://www.acmicpc.net/problem/10826

import sys
input = sys.stdin.readline

n = int(input())

Fibo = [0, 1]

if n != 0 or n != 1:
    for i in range(2, n + 1):
        Fibo.append(Fibo[i - 2] + Fibo[i - 1])

print(Fibo[n])