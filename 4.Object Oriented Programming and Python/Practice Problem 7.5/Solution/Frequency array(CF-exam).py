from collections import Counter
n,a=map(int,input().split())
A=list(map(int,input().split()))
Cnt=Counter(A)

for i in range(1,a+1):
    print(Cnt[i])
