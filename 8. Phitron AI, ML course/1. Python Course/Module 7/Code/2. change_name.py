
from ast import mod


names=[]
with open("names.txt",mode="r") as file:
    file=file.readlines()
    for i in file:
        names.append(i.strip())

names=list(map(str.lower,names))
names=list(set(names))
names=list(map(str.capitalize,names))
names.sort()
with open("clean_name.txt",mode="w") as file:
    for i in names:
        file.write(f"{i}\n")