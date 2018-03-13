while True:
	c = input("Enter any character: ")
	if c == '0':
		break
	else:
		if((c>='a' and c<='z') or (c>='A' and c<='Z')):
			print(c, "is an alphabet.\n")
		else:
			print(c, "is not an alphabet.\n")
