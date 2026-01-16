def odd(A):
    n=0
    for i in A:
        if i%2==0:
            n+=1
    return n

n=int(input())
A=list(map(int,input().split()))
a=0
while True:
    x=odd(A)
    if x==n:
        a+=1
        for i in range(0,n):
            A[i]=A[i]/2         
    else:
        break
print(a)