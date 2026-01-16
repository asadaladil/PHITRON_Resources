import numpy as np

def transpose_matrix(a: list[list[int|float]]) -> list[list[int|float]]:
    b=np.array(a)
    b=b.T
    return b

print(transpose_matrix([[1,2,3],[4,5,6]]))