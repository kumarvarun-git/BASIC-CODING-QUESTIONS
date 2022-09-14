a = [8,3,5,2,9]
b= []
while a:
    min = a[0]
    for x in a:
        if x < min:
            min = x
    b.append(min)
    a.remove(min)
print(b)
       
            
            
    
    