import math
print ("Эта программа вычисляет все действительные корни уравнения")
print ("a * x ^ 2 + b * x + c = 0")
a = int(input())
b = int(input())
c = int(input())
if a != 0:
    D = (b * b) - (4 * a * c)
    if D == 0:
        x1 = -b / (2 * a)
        print (str(x1) + " является единственным корнем этого уравнения")
    if D > 0:
        x1 = (-b - math.sqrt(D)) / (2 * a)
        x2 = (-b + math.sqrt(D)) / (2 * a)
        print (str(x1) + "," + str(x2) + " являются кормями уравнения")
    if D < 0:
        print ("уранение не имеет решений")
else:
    x1 = (-c / b)
    print (str(x1) + " является единственным корнем этого уравнения")

