#피보나치 수

n = int(input())

cur, next = 0, 1

for _ in range(n):
    cur, next = next, cur + next

print(cur)