def search(a,n):
	for i in range(len(a)):
		if a[i]== n:
			return True
	return False

a=[]
count=int(input("Enter the count of numbers"))
for i in range(1,count+1):
	b=input("Enter the number in list")
	a.append(b)
print(a)
n=input("Enter the number you want to search in list")
if search(a,n):
	print("Number exists")
else:
	print("number didnt exists")
