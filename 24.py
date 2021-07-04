n, m = map(int, input().split())
arr = [[0 for i in range(m + 1)]]
for _ in range(n): arr.append([0] + list(map(int, input().split())))
arr[0][1] = 1
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if arr[i][j] != 0: arr[i][j] = arr[i - 1][j] + arr[i][j - 1]

if arr[n][m]!=0: print(arr[n][m])
else: print("Impossible")
