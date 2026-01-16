
exp=input()
cnt={}
for i in exp:
    if i in cnt:
        cnt[i]+=1
    else:
        cnt[i]=1
lst=[]
for i,j in cnt.items():
    s=str(f"{i} : {j}")
    lst.append(s)
lst.sort()
for i in lst:
    print(i)