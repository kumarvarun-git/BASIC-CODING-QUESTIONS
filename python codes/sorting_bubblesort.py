

def bubbleSort(ar):
    n = len(ar)
    for i in range(n):
        for j in range(0, n-i-1):
            if ar[j] > ar[j+1]:
                 ar[j], ar[j+1] = ar[j+1], ar[j]

ar = [4,5,3,5,3,5,3,3,4,4,255,54545,4,54545,45,45,54,45,545,44,55,54,54,545,521,8899,3154,82,580,15843]
bubbleSort(ar)
print ("Sorted array is:")
for i in range(len(ar)):
    print (ar[i])
    
   