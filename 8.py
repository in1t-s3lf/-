def f(n):
    if(n==1 or n==0): return 1
    elif(n%2==0): return f(n/2)+f(n/2-1)
    return f((n-1)/2)-f((n-1)/2-1)

x = int(input())
if x<=1000:
    print(f(x))
