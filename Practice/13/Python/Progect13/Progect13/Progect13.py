from array import *
a = array('u',[])
b = 1
while b > 0:
	g = int(input("Введите число: "))
	if g < 2:
		print("Введите число, больше либо равно 2")
	else :
		for u in range(2 , g):
			if g % u == 0:
				break
			else:
				u += 1
				a.append(u)
		if len(a) == g - 2:
			print("Простое")
			break
		else:
			print("Составное")
			break


