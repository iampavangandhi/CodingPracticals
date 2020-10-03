# Even Odd in Python

test = int(input("TestCases: "))
inp = []

for x in range(test):
	inp.append(int(input("Enter: ")))

for x in range(test):
	if inp[x]%2==0:
		print("even")
	else:
		print("odd")