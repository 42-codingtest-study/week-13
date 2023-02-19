#최대 상승

import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
max = 0 #이익 최대값
res = 0 #결과값

for i in range(N - 1, -1, -1) :
    benefit = max(max, A[i])
    res = max(res, max - A[i])

print(res) 