import math
print ("Выберите способ решения")
print ("1. По сторонам")
print ("2. По координатам")
variant = float(input())
if variant == 1:
   print ("Введите длину каждой стороны треугольника")
   a = float(input())
   b = float(input())
   c = float(input())
   p = (a + b + c) / 2;
   if p * (p - a) * (p - b) * (p - c) >= 0:
       S = math.sqrt(p * (p - a) * (p - b) * (p - c))
       print("S = " + str(S))
   else:
       print("Треугольник не существует!")


if variant == 2:
   print ("Введите координаты каждой вершины треугольника")
   x1, y1 = map(float, input().split())
   x2, y2 = map(float, input().split())
   x3, y3 = map(float, input().split())
   if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) >= 0 and (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3) >= 0 and (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) >= 0 ):
      AB = math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
      BC = math.sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
      AC = math.sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
      p = (AB + BC + AC) / 2;
      S = math.sqrt(p * (p - AB) * (p - BC) * (p - AC));
      print("S = " + str(S))
   else:
      print("Треугольник не существует!")