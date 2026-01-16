x,y=map(int,input().split())
n=0
sum=0
while n<=y:
    if n==0:
        n+=2
        continue
    sum+=x**n
    n+=2
print(sum)