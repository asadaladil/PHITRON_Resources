t=input()
t=int(t)
while t!=0:
    s=input()[::-1]
    for i in s:
        print(i,end=' ')
    print()
    t-=1