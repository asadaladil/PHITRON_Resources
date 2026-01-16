import mysql.connector

mydb =mysql.connector.connect(
    host="localhost",
    user="root",
    password="adil2002",
    database="my_database" #use database
)

mycursor=mydb.cursor()
sql_command = """
                    INSERT INTO Student(roll,first_name,last_name)
                    VALUES(1,"Adil","Bro");  
              """
mycursor.execute(sql_command)
mydb.commit()
