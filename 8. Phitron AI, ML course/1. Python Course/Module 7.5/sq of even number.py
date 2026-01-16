nums=[i for i in range(11)]

even_sq=list(
    map(lambda x: x**2, # it will perform operation on the filtered array..
        filter(lambda x: x%2==0,nums) # it will return filtered array..
        )
    )
print(even_sq)