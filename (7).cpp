def jump(n):
    a, b, c = 0, 1, 1
    if n < 2:
        return [a, b, c][n]
    for i in range(n):
        a, b, c = b, c, a+b+c
        n -= 1
    return b
x = int(input())
if x<=31:
    print(jump(x))
