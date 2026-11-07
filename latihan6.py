
suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

# 1. Mencari nilai 0
if 0 in suhu:
    print("Nilai 0 ditemukan")
else:
    print("Nilai 0 tidak ditemukan")

# 2. Filter suhu positif
hasil = []

for x in suhu:
    if x > 0:
        hasil.append(x)

print("Suhu positif:")
print(hasil)
