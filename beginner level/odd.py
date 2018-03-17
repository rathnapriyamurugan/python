low=int(input("Enter the lower limit range:"))
upp=int(input("Enter the upper limit range:"))
for i in range(low,upp+1):
    if(i%2!=0):
        print(i)
