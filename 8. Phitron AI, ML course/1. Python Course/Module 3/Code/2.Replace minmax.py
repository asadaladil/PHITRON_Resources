n=input()
A=input()
A=A.split()
A=[int(x) for x in A]
mn=min(A)
mx=max(A)
mni=A.index(mn)
mxi=A.index(mx)
A[mni]=mx
A[mxi]=mn
A=[str(x) for x in A]
A=' '.join(A)
print(A)