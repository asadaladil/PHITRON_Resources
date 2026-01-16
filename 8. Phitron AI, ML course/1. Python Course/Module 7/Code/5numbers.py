import random
n=5
numbers=[random.randint(1,100) for i in range(n)]

inp=int(input("Enter an index: "))
try:
    print(numbers[inp])
except:
    print("Invalid index")