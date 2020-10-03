def calc(len, wid,tree):
	if len==wid==tree:
		print("eq")
	elif len==wid or wid==tree or tree==len:
		print("iso")
	else:
		print("sce")
	
l = int(input("ENTER "))
w = int(input("ENTER "))
k = int(input("ENTER "))
for x in range(0,20):
        calc(l,w,k)
