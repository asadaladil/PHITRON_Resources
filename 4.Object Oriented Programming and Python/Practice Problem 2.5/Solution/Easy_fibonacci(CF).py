n=input()
n=int(n)
a=0
b=1
t=3
if n==1:
    print(0)
elif n==2:
    print(0,1)
else:
    print(0,1,end=' ')
    while t<=n:
        c=a+b
        print(c,end=' ')
        a=b
        b=c
        t+=1
    print()