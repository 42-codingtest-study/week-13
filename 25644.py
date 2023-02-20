import sys
input = sys.stdin.readline

n = int(input())
prices = list(map(int, input().split()))
res = 0
max_prices = 0

for i in range(n):
    if prices[i] < max_prices:
        max_prices = prices[i]
    elif prices[i] - max_prices > res:
        res = prices[i] - max_prices

print(res)

