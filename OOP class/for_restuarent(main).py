from menu import Pizza,Burger,Drinks,Menu
from restaurent_oop_Part_2 import Restaurent
from restaurent_oop import Chef, Customer,Server,Manager
from order_rest import Order
def main():
    menu=Menu()
    pizza_1=Pizza('Shutki Pizza',600,'large',['shutki','onion'])
    menu.add_menu_item('pizza',pizza_1)
    pizza_2=Pizza('Alur Vorta Pizza',400,'large',['potato','onion','oil'])
    menu.add_menu_item('pizza',pizza_2)
    pizza_3=Pizza('Dal Pizza',500,'large',['dal','oil'])
    menu.add_menu_item('pizza',pizza_3)

    burger_1=Burger('naga burger',1000,'chicken',['bread','chili'])
    menu.add_menu_item('burger',burger_1)
    burger_2=Burger('beef burger',1200,'beef',['goru','haddi'])
    menu.add_menu_item('burger',burger_2)

    coke=Drinks('coke',50,True)
    menu.add_menu_item('drinks',coke)
    coffee=Drinks('Mocha',300,False)
    menu.add_menu_item('drinks',coffee)

    menu.show_menu()

    restaurent=Restaurent('sai baba restaurent',2000,menu)

    manager=Manager('kala chan',5,'kala@chan.com','kalipur',1500,'jan 1 2020','core')

    restaurent.add_employee('manager',manager)

    chef=Chef('Rustom',6,'chupa@rustom.com','rustomnagar',3500,'feb 1 2020','Chef','everything')
    restaurent.add_employee('chef',chef)

    server=Server('chotu',6,'nai@jai.com','restaurent',200,'march 1 2020','server')
    restaurent.add_employee('server',server)

    restaurent.show_employee()



    customer_1=Customer('sakib',6,'king@sakib.com','banani',100000)
    order_1=Order(customer_1,[pizza_3,coffee])
    customer_1.pay_for_order(order_1)
    restaurent.add_order(order_1)



    restaurent.receive_payment(order_1,2000,customer_1)

    print(restaurent.revenue,restaurent.balance)


    customer_2=Customer('sakib vai',6,'king@sakib.com','banani',100000)
    order_2=Order(customer_1,[pizza_3,burger_2,coffee])
    customer_1.pay_for_order(order_2)
    restaurent.add_order(order_2)



    restaurent.receive_payment(order_2,5000,customer_2)

    print(restaurent.revenue,restaurent.balance)

    restaurent.pay_expense(restaurent.rent,'Rent')
    print(restaurent.revenue,restaurent.balance,restaurent.expense)

if __name__=='__main__':
    main()