import mysql.connector

mydb =mysql.connector.connect(
    host="localhost",
    user="root",
    password="adil2002",
    database="my_database" #use database
)

mycursor=mydb.cursor()
sql_command = """
                    UPDATE Student
                    SET last_name = "Vai"
                    WHERE roll=1;  
              """
mycursor.execute(sql_command)
mydb.commit()