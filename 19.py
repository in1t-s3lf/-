a = [1]
m = int(input())
if m<=30 and m>0:
    for i in range(m):
        print(*a)
        b = [1]
        b +=[a[k]+a[k+1] for k in range(len(a)-1)]+[1]
        a = b
elif m==0:
    print("")
