y, x = map(int, input().split())

x, y = x - 1, y - 1

f = [[0]*8 for i in range(8)]

f[x][y] = 1

for i in range(x, 7):
    f[i+1][0] += f[i][1]
    
    for j in range(1, 7):
        f[i+1][j] += f[i][j-1] + f[i][j+1]
    
    f[i+1][7] += f[i][6]

print(sum(f[7]))
