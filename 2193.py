#이천수
n = int(input())

s = [0, 1, 1]
for i in range(3, 91):
	result = s[i - 2] + s[i - 1]
	s.append(result)

print(s[n])