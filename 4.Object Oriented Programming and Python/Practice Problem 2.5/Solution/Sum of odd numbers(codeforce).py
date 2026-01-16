t=input()
t=int(t)
while t!=0:
    x,y= map(int,input().split())
    a=max(x,y)
    b=min(x,y)
    sum=0
    while b<a:
        b+=1
        if b%2!=0 and b!=a:
            sum+=b
    print(sum)
    t-=1