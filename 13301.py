#타일 장식물
n = int(input())
dp = [0] * (82)
dp[1] = 4
dp[2] = 6

for i in range(3, n + 2):
    dp[i] = dp[i - 1] + dp[i - 2]

print(dp[n])