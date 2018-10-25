#Write a program that, given an integer, determines if it is prime or not (if it is not prime, you do not
#need to print its factors).
ok=1
nr=int(input("Numarul:"))
for i in range(2, nr//2):
	if nr%i == 0:
		ok=0
		break
if ok == 1:
	print("este prim")
else:
	print("nu este prim")
