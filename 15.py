def maxl (i):
    if i > n-3:
        return 0
    if m[i] == 0:
        m[i] = x[i+1] - x[i] + max(maxl (i+2), maxl (i+3));
    return m[i]

n = int(input())
x = sorted(list(map(int,  input().split())))
m = [0 for i in range (n)]
print(x[-1] - x[0] - max( maxl(1),maxl (2)))
