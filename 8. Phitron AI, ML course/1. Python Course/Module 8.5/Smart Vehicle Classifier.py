
class Vehicle:
    def __init__(self,type,name,speed):
        self.__type=type
        self._name=name
        self._speed=speed
        print(f"{type} added: {name}")
    
    def classify(self):
        if self._speed>100:
            return (f"High speed Vehicle")
        return (f"Normal speed Vehicle")
    
    def show_info():
        pass


class Car(Vehicle):
    def __init__(self, name, speed):
        super().__init__("Car", name, speed)
    
    def show_info(self):
        print(f"Type: Car Name: {self._name} Speed: {self._speed}km/h Predicted: {self.classify()}")
        
class Bike(Vehicle):
    def __init__(self,name, speed):
        super().__init__("Bike", name, speed)
    
    def show_info(self):
        print(f"Type: Bike Name: {self._name} Speed: {self._speed}km/h Predicted: {self.classify()}")


n=int(input())
lst=[]
for i in range(n):
    a,b,c=input().split()
    if a=="Car":
        car=Car(b,int(c))
        lst.append(car)
    elif a=="Bike":
        bike=Bike(b,int(c))
        lst.append(bike)

print("\n\n--- Vehicle Details ---")
for i in lst:
    i.show_info()
        