
class MobilePhone:
    def __init__(self,model):
        self.model=model
        self.__battery="100%"
        
    def use(self):
        temp=int(self.__battery[0:3])-5
        self.__battery=f"{temp}%"
    
    def charge(self):
        self.__battery="100%"
    
    def get_battery(self):
        return self.__battery


phone=MobilePhone("SAMSUNG")
print(phone.get_battery())
phone.use()
print(phone.get_battery())
        