a, x, b = map(str, input().split())
if (x == '+'):
    rezultat = float(a) + float(b)
    print(rezultat)
elif (x == '-'):
    rezultat = float(a) - float(b)
    print(rezultat)
elif (x == '*'):
    rezultat = float(a) * float(b)
    print(rezultat)
elif (x == '/'):
    rezultat = float(a) / float(b)
    print(rezultat)
else:
    print("Не корректные данные")
