import sys
input = sys.stdin.readline

n = int(input())
x = 0
y = 1
for _ in range(n):
    x, y = y, x + y

print(x)
