class Drink:
    def __init__(self):
            self.price  = 0.0
            self.volume = 0.0
            self.name   = ""

balance = int(input("������� ������: "))
drink_amount = int(input("������� ���������� ��������: "))

best = Drink()
inpt = Drink()

for i in range(drink_amount):
	inpt.name   = input("��� �������: ")
	inpt.price  = int(input("���� �������: "))
	inpt.volume = int(input("����� �������: "))

	liters = (balance // inpt.price) * inpt.volume
	if liters == 0:
		continue
	
	if best.price == 0:
		best = inpt
		continue
	
	best_liters = (balance // best.price) * best.volume
	if liters > best_liters:
		best = inpt

if best.price == 0:
	print(-1)
else:
    bottles = balance // best.price
    print("{} {}\n{}\n{}".format(best.name, bottles, bottles * best.volume,
        balance - best.price * bottles))