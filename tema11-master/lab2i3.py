#Determine the largest (max) and the smallest (min) element from a sequence. The number of elements
#n and the elements Ai are read from the standard input into the same variable.
n = int(input("Numar de elemente:"))
min=1000000
max=-1000000
for i in range(n):
	x = int(input("Numarul:"))
	if x < min:
		min = x
	if x > max:
		max = x
print("\nmaximul=", max, "\n")
print("minimul=", min)
