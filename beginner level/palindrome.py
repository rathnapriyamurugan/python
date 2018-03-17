n=int(input("Enter number:"))
tem=n
revs=0
while(n>0):
    dig=n%10
    revs=revs*10+dig
    n=n//10
if(tem==revs):
    print(" yes palindrome")
else:
    print("no palindrome")
