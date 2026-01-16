a_friends = {"Rahim", "Karim", "Sakib", "Jamal"} 
b_friends = {"Sakib", "Jamal", "Rafiq", "Nadim"} 

mutual=a_friends.intersection(b_friends)
print(f"Mutual Friend:{mutual}")
unique_a=a_friends-mutual
print(f"Unique to A:{unique_a}")
unique_b=b_friends-mutual
print(f"Unique to B:{unique_b}")
total_unique=a_friends.union(b_friends)
print(f"Total Unique Friends:{len(total_unique)}")