class CPU:
    def __init__(self,cores) -> None:
        self.core= cores


class RAM:
    def __init__(self,size) -> None:
        self.size= size


class HardDrive:
    def __init__(self,capacity) -> None:
        self.capacity = capacity

# computer has a cpu
# computer has a ram
# computer has hard disk
class Computer:
    def __init__(self,cores,ram_size,hd_capacity) -> None:
        self.cpu=CPU(cores)
        self.ram=RAM(ram_size)
        self.hard_disc(hd_capacity)


mac=Computer(8,16,512)

# inheritance vs composition