a = int(input("Enter: "))
reserve = a
temp = 0
rev=0

while a>0:
	temp = a%10
	a = a//10
	rev = rev*10 + temp

if reserve == rev:
	print("Palindrome")
else:
	print("not")