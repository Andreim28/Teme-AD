#There are given the grades obtained by students. Write a program that determines if all students passed
#the exam or not. Calculate the percentage of students that obtained grades smaller than 8.
ok=1
k=0
nr=0
n=int(input("Nr elevi:"))
for i in range(n):
	nota=int(input("Nota:"))
	if nota < 5:
		ok=0
	if nota < 8:
		k=k+1
if ok == 0:
	print("\nNO")
else:
	print("\nYES")
print("\nProcentajul elevilor cu media mai mica decat 8:", (k/n)*100)
