n,m=map(int, input().split())
num=[i for i in input().split()]
A=set([i for i in input().split()])
B=set([i for i in input().split()])   
happines=0
for i in num:
    if i in A:
        happines+=1
    elif i in B:
        happines-=1
print(happines)