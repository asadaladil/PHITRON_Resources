from collections import Counter
n=int(input())
A=list(map(int,input().split()))
num=Counter(A)
cnt=0
for i in num:
    if num[i]>i:
        cnt+=abs(i-num[i])
    elif num[i]<i:
        cnt+=num[i]
print(cnt)