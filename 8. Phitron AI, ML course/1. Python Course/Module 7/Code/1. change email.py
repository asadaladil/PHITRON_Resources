from create_email import change_email

change_email()
email=[]
with open("emails.txt",mode="r") as file:
    f=file.readlines()
    for i in f:
        if i in email:
            continue
        email.append(i.strip())

email=set(email)
email=list(map(str.lower,email))
email.sort()

with open("unique_emails.txt",mode="w") as file:
    for i in email:
        file.write(f"{i}\n")
