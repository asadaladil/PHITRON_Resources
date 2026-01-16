n=input()
A=input()
A=A.split()
A=[int(x) for x in A]
mn=min(A)
print(mn,A.index(mn)+1)