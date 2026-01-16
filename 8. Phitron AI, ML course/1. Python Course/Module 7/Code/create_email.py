import random

no=20
length=10

char=[]
digit=[]
e=""
def change_email():
    for i in range(7):
        e=""
        for j in range(length-4):
            e+=random.choice([chr(i) for i in range(65,91)]+[chr(i) for i in range(97,123)])
        char.append(e)
    for i in range(2):
        e=""
        for j in range(4):
            e+=random.choice([str(i) for i in range(10)])
        digit.append(e)

    end=['@gmail.com','@yahoo.com']
    with open("emails.txt",mode="w") as email:
        for i in range(no):
            e=random.choice(char)+random.choice(digit)+random.choice(end)
            email.write(f"{e}\n")
    