import mysql.connector

mydb =mysql.connector.connect(
    host="localhost",
    user="root",
    password="adil2002",
    database="hr" #use database
)

mycursor=mydb.cursor()
sql_command = """
                    select *
                    from employees
                    WHERE salary>1000
                    LIMIT 10;  
              """
mycursor.execute(sql_command)
data=mycursor.fetchall()

for i in data:
    print(i)
