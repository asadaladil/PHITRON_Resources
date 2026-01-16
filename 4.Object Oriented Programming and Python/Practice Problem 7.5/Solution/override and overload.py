""" class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)

    def __gt__(self,other):
        older=self.age
        man=self
        for i in other:
            if i.age>=older:
                older=i.age
                man=i.name
        return f'{man} is older'




sakib = Cricketer('Sakib', 38, 68, 91)
musfiq = Cricketer('Rahim', 36, 68, 88)
kamal = Cricketer('Kamal', 39, 68, 94)
jack = Cricketer('Jack', 38, 68, 91)
kalam = Cricketer('Kalam', 37, 68, 95)


result=sakib>[musfiq,kamal,jack,kalam]
print(result)
 """


class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight


class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)

    def __lt__(self,others):
        younger=self.age
        man=self.name
        for i in others:
            if i.age<younger:
                younger=i.age
                man=i.name
        
        return f'{man} is younger.'

Sakib = Cricketer('Sakib', 38, 68, 91)
Mushfiq = Cricketer('Mushfiq', 36, 55, 82)
Mustafiz = Cricketer('Mustafiz', 27, 69, 86)
Riyad = Cricketer('Riyad', 39, 72, 92)

result=Sakib<[Mushfiq,Mustafiz,Riyad]
print(result)

