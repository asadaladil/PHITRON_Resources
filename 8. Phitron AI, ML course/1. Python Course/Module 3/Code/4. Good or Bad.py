
n=int(input())
for i in range(n):
    A=input()
    f=1
    for j in range(len(A)-2):
        if A[j:j+3]=="101" or A[j:j+3]=="010":
            print("Good")
            f=0
            break
    if f:
        print("Bad")
            