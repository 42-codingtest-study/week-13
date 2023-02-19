#카드 구매하기

import sys
input = sys.stdin.readline

n = int(input()) #n장의 카드
p = [0] + list(map(int, input().split())) #카드의 가격 저장
dp = [0 for _ in range(n + 1)] #dp[n]은 n장의 카드를 뽑는

for i in range(1, n + 1):
    for j in range(1, i + 1):
        dp[i] = max(dp[i], dp[i - j] + p[j])
     
print(dp[n])