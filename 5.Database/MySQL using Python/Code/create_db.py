import mysql.connector

mydb =mysql.connector.connect(
    host="localhost",
    user="root",
    password="adil2002",
)

# Create a database
mycursor=mydb.cursor()

db_name="my_database"
sql_command="CREATE DATABASE "+db_name

mycursor.execute(sql_command)