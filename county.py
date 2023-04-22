
counter = 0

for i in range (8):
	for j in range (6):
		for k in range (4):
			for l in range (2):
				guess = 48*i + 8*j + 2*k + l
				print(i," ", j, " ", k, " ", l, " ", "->", " ", counter, " ", "guess=", guess)
				counter = counter + 1

