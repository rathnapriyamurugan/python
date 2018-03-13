while True:
	r = input("Enter any character: ")
	if ch == '0':
		break
	else:
		if(r=='a' or r=='A' or r=='e' or r=='E' or r=='i' or r=='I'
			or r=='o' or r=='O' or r=='u' or r=='U'):
			print(r, "is a vowel.\n")
		else:
			print(r, "is not a vowel.\n")
