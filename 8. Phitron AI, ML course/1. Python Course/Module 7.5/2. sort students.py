
students = [("Rafi", 89), ("Sumi", 95), ("Hasan", 90), ("Nila", 75), ("Anik", 98)]
students=[(i[1],i[0]) for i in students]
students.sort(reverse=True)
print("Top 3 Students:")
for i in range(3):
    print(f"{students[i][1]} - {students[i][0]}")