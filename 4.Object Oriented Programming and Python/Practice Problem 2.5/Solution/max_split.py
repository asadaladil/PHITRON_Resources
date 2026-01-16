s=input()
a=0
b=0
c=0
st = []
#st=str(st)
r=""
for i in s:
    if i=='L':
        a+=1
        r+=i
    elif i=='R':
        b+=1
        r+=i
    if a==b:
        st.append(r)
        c+=1
        r=""
        a=0
        b=0
print(len(st))
for i in st:
    print(i)

""" def split_balanced_string(S):
    count = 0
    result = []
    temp = ''
    
    for char in S:
        temp += char
        
        if char == 'R':
            count += 1
        else:
            count -= 1
        
        if count == 0:
            result.append(temp)
            temp = ''
    
    return len(result), result

# Read input
S = input()

# Split the balanced string
num_strings, balanced_strings = split_balanced_string(S)

# Print the result
print(num_strings)
for string in balanced_strings:
    print(string) """