num = int(input("ENTER :"))
flag=0
for i in range(2,num//2):
	if num%i==0:
		flag = 50
	else:
		continue

if flag!=50:
	print("prime")
else:
	print("not prime")