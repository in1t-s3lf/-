n, m = map(int, input().split())

if n>=1 and m<=50:
    f=[[0]*(m+1) for i in range(n+1)]
    f[1][1]=1
    for i in range(2,n +1):
        for j in range(2,m+1):
            f[i][j] = f[i-1][j-2] + f[i-2][j-1]
    print(f[n][m])
