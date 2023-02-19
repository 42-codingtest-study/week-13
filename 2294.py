n, k = map(int, input().split())

money_list = []
for i in range(n):
    money_list.append(int(input()))

dp = [10001] * (k + 1)
dp[0] = 0

for money in money_list :
    for i in range(money, k+1):
        # print("money", money)
        dp[i] = min(dp[i], dp[i-money]+1)
        # print("dp", dp)
        # print("dp[i]", dp[i])
        # print("dp[k]", dp[k])
        # print("dp[i-money]", dp[i-money])
        # print("dp[k]", dp[k])

# print(money)

if dp[k] != 10001:
    print(dp[k])
else :
    print(-1)
