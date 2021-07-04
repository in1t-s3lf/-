n = int(input())
a = []
a.append(2)
a.append(3)
for i in range(2,n):
    t = a[i - 1] + a[i - 2]
    a.append(t)
print(a[n- 1])
