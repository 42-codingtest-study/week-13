n, k = map(int, input().split())
s = [] # money

dp = [10001 for i in range(n + 1)]

for i in range(n):
    s.append(int(input()))

o = []

for money in s:
    for i in range(money, k + 1):
        dp[i] = min(dp[i], dp[i - money] + 1)
    if dp[k] == 10001 :
        print (-1)
    else:
        print(dp[k])
# for i in range(1, k + 1):
#     for j in s:
#        15  if j <= i and dp[i - j] != -1:
#             o.append(dp[i - j])
#     if not o:
        
# print (dp[k])