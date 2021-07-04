import math
n, m = map(int, input().split())
print(math.factorial(n + m - 2) // (math.factorial(n - 1) * math.factorial(m - 1)))
