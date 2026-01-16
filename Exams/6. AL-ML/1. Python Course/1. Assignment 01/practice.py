from functools import reduce

def fact(n):
    result=1
    if n<=1:
        return 1
    for i in range(2,n+1):
        result*=i
    return result


num=input("Input: ")

if num[0]=='-':
    print("Output: Not Strong Number")
    
else:
    digits=[int(x) for x in num]
    fact_digit=list(map(fact,digits))
    Sum=reduce(lambda x,y: x+y,fact_digit)
    if int(num)==Sum:
        print("Output: Strong Number")
    else:
        print("Output: Not Strong Number")
