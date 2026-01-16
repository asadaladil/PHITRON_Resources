class Shopping:
    cart=[] #class attributes #static attribute
    origin='china'
    def __init__(self,name,location) -> None:
        self.name='Jamu na city'
        self.location='Jam er maj khane'

    def purchase (self, item, price, amount):
        remaining=amount-price
        print(f'buying: {item} for price: {price} and remaing: {remaining}')

    @staticmethod # because of static method we do not use to write self
    def multiply (a,b): # self er kichui use kora jabena
        return a*b

    @classmethod  # @ is a decorator 
    def hudai_dekhi(self,item):
        print('hudai dekhi ac er hawa khaite',item)




basundara= Shopping('base en dhara','not popular')
#basundara.purchase('sare',5000,10000)
Shopping.hudai_dekhi('sare') # as it is a class method so we can access it.
#Shopping.purchase('saree',500,1000) #we cannot access it as it is not a class method
a=Shopping.multiply(5,15) #static method
print(a)

# static method vs class method 