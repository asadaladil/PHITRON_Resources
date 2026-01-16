x,y=map(int,input().split())
a=0
b=0
count=0
while a<=x:
    while b<=x:
        if (y-a-b)>=0 and (y-a-b)<=x:
            count+=1
        b+=1
    a+=1
    b=0
print(count)