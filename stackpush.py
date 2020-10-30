stack=[]
n=int(input("Enter the no of count "))
for i in range(1,n+1):
	b=input("Enter the element")
	stack.append(b)
print("This is initial Stack\t",stack)
print(stack.top())
print(stack.size())
#pop the element form stack

print("Perform pop operation")
stack.pop()
print(stack)
b1=input("Enter the element to push into stack")
stack.append(b1)
print(stack)
