class Person:
    def __init__(self, name, age, height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
    def eat(self):
        print('vat mangso polau korma')

    def exercise(self):
        raise NotImplementedError #force for override otherwise it will give error.

class Cricketer(Person):
    def __init__(self, name, age, height, weight,team) -> None:
        self.team=team
        super().__init__(name, age, height, weight)
    
    #this is override method
    def eat(self): 
        print('vegetable')

    def exercise(self):
        print('gym e poisa diye hudai gham jorai')

    #dunder method for overload.
    def __add__(self,other):
        return self.age+other.age
    
    def __mul__(self, other):
        return self.weight*other.weight
    
    # > operator overload
    def __gt__(self,other):
        return self.height>other.height

sakib=Cricketer('sakib',38, 68 ,91,'BD')
""" print(sakib.eat())
print(sakib.exercise()) """
mushi=Cricketer('mushi',36,65,78,'BD')
print(sakib+mushi)
print(sakib*mushi)
print(sakib>mushi)