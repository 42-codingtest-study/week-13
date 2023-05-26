#피보나치나치
n = int(input())
s = [0, 1, 1]
for i in range(3, n + 1):
	new = s[i - 2] + s[i - 1]
	s.append(new)

print(s[n])