#1 1 2 3 5 8 13 21

def input_fibo(x):
    if x == 0:
        return (1)
    elif x == 1:
        return (1)
    else:
        return (input_fibo(x - 1) + input_fibo(x - 2))

# for i in range(2, n + 1):
#     if input_fibo(i):
#         input.append(i)

n = int(input())

dp = [0 for _ in range(n + 2)]
dp[1] = 1

# for p in input:
for i in range(2, n + 2):
    dp[i] = (dp[i - 1] + dp[i - 2])
    # dp[i] = input_fibo(dp[i])
    # print(dp[i])

print((dp[n] + dp[n + 1]) * 2)