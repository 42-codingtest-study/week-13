# <다이나믹 프로그래밍>
# 2294
# 동전2
# https://www.acmicpc.net/problem/2294

import sys
input = sys.stdin.readline

n, k = map(int, input().split())

# 가지고 있는 코인
coin = [int(input()) for _ in range(n)]

# i원을 만들었을 때의 최소 코인 개수
how = [10001] * (k + 1)     # k값이 최대 10000원이므로 100001개 사용하는 경우로 초기화
how[0] = 0

for c in coin: #1
    for i in range(c, k + 1):
        # how[n]은 how[n - 동전1] + 1(동전1 한개) or how[n - 동전2] + 1(동전2 한개) ... 중 최소 개수
        how[i] = min(how[i], how[i - c] + 1)

if how[k] == 10001:
    print(-1)
else:
    print(how[k])