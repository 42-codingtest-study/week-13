#정균이도 주식하니?
import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
result = 0
tmp = arr[0]

for i in range(1, n):
    if arr[i] < tmp:
        tmp = arr[i]
    result = max(result, arr[i] - tmp)
print(result)