h1, a, m1 = input("Введите время 1 (вводите через пробел):\n").split()
h2, a, m2 = input("Введите время 2 (вводите через пробел):\n").split()
h1=int(h1)
h2=int(h2)
m1=int(m1)
m2=int(m2)
a=str(a)
if (0 < h1) and (h1 < 23) and (0 < h2) and (h2 < 59) and (0 < m1) and (m1 < 59) and (0 < m2) and (m2 < 59):
  i1 = 60 * h1 + m1
  i2 = 60 * h2 + m2
  f = i1 - i2
  if (f > 15): print ("Встреча не состоится")
  elif (f < -15):  
        print ("Встреча не состоится")
  else : 
        print ("Встреча состоится")
else: print ("Ошибка, введите корректное время")