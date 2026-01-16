from bank import User,Admin

Adil=User('Adil','g.com','1234',10000)


Alif=User('Alif','f.com','1478',500000)
Alif.Transfer(10000,'Adil',Adil)
#print(Adil.show_balance('Adil','1234'))

Boss=Admin('don vai','vai.com','jana lagbe na',15000)
Alif.Loan_system(False)
Adil.Loan(2000)
Adil.Withdraw(200)
print(Adil.show_balance("Adil","1234"))
Adil.Transaction_history()