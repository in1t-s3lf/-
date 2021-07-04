n = int(input())
a = [0]*200000
a[0] = a[1] = 1
for i in range(2, n+1):
	a[i] = (a[i-1] + a[i-2])%10

print(a[n]%10)
