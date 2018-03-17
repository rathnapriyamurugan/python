y= int(input("Please Enter the Year Number: "))
 
if (y%400 == 0):
          print("%d is a Leap Year" %y)
elif (y%100 == 0):
          print("%d is Not the Leap Year" %y)
elif (y%4 == 0):
          print("%d is a Leap Year" %y)
else:
          print("%d is Not the Leap Year" %y)
