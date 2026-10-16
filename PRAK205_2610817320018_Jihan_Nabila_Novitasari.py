import math

a, b = map(int, input().split())

tinggi = min(a, b)
sisi_miring = max(a, b)

alas = int(math.sqrt(sisi_miring**2 - tinggi**2))
keliling = alas + tinggi + sisi_miring
luas = alas * tinggi // 2

print("Alas =", alas, "cm")
print("Tinggi =", tinggi, "cm")
print("Keliling =", keliling, "cm")
print("Luas =", luas, "cm^2")
