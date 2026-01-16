import mysql.connector

mydb =mysql.connector.connect(
    host="localhost",
    user="root",
    password="adil2002",
)
print(mydb)