
produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

# 1. Mencari produk Keyboard
if "Keyboard" in produk:
    print("Keyboard ditemukan")
else:
    print("Keyboard tidak ditemukan")

# 2. Filter nama produk lebih dari 5 karakter
hasil = []

for x in produk:
    if len(x) > 5:
        hasil.append(x)

print("Produk dengan lebih dari 5 karakter:")
print(hasil)
