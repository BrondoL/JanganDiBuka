x1 = []
x2 = []
t = []

n = int(input("berapa data: "))

akhir = []
for i in range(n):
	akhir.append(0)

for i in range(n):
	print("id tanaman", i+1)
	x1.append(int(input("tinggi tanaman (cm2): ")))
	x2.append(int(input("tinggi tanaman (cm3): ")))
	t.append(int(input("Taget Kelas: ")))
	print()

w = []
print("INISIALISASI")
for i in range(2):
	print("W", i+1,": ", end="")
	w.append(float(input()))

b = float(input("bias awal: "))
a = float(input("alfa: "))
threshold = float(input("threshold: "))

epoh = 1
while(0 in akhir):
	print("KOMPUTASI EPOH KE-" + str(epoh))
	for i in range(n):
		print("ID TANAMAN", i+1)
		y = float("{:.2f}".format(w[0]*x1[i] + w[1]*x2[i] + b))
		print("y:",y)
		yin = 0
		if(y > 1):
			yin = 1
			print("Hasil Aktivasi(y) = y > O")
		elif(y == 0):
			yin = 0
			print("Hasil Aktivasi(y) = -O < y < O")
		elif(y < 0):
			yin = -1
			print("Hasil Aktivasi(y) = y < O")

		print("t:",t[i])
		print("y:",yin)
		if(yin != t[i]):
			print("y != t")
			w[0] = float("{:.2f}".format(a * t[i] * x1[i] + w[0]))
			w[1] = float("{:.2f}".format(a * t[i] * x2[i] + w[1]))
			b = a * t[i] + b
			akhir[i] = 0
		else:
			print("y == t")
			akhir[i] = 1
		print("w1:", w[0])
		print("w2:", w[1])
		print("b:", b)

		print()
		epoh = epoh + 1