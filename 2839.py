#슈가맨
n = int(input())

result = 0
while n >= 0 :
    if n % 5 == 0 :  # 5의 배수이면
        result += (n // 5)  # 5로 나눈 몫을 구해야 정수가 됨
        print(result)
        break
    n -= 3  
    result += 1  # 5의 배수가 될 때까지 설탕-3, 봉지+1
if n < 0 :
	print(-1)