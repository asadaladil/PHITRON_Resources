class Phone:
    def __init__(self,model):
        self.model=model
        self.battery="100%"

class SmartPhone(Phone):
    def __init__(self, model,OS):
        super().__init__(model)
        self.opertaing_system=OS

class GamingPhone(SmartPhone):
    def __init__(self, model, OS,Cool):
        super().__init__(model, OS)
        self.Cooling_system=Cool
    
    def start_game(self,name):
        s=f"Playing {name} on {self.model}"
        print(s)



game=GamingPhone("Samsung","Android","Darun")

print(game.battery)


