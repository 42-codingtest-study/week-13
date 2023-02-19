# <다이나믹 프로그래밍>
# 9655
# 돌 게임
# https://www.acmicpc.net/problem/9655

# import sys
# input = sys.stdin.readline

n = int(input())

rock = [1, 3]

game = [0] * n

for r in rock:
    for i in range(r, n + 1):
        game[i] = min(game[i], )

# 돌 n개를 다 가져갔을 떄 횟수가 짝수면 상근이가 이김 / 홀수면 창용이가 이김
