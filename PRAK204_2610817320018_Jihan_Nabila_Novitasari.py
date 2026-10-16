import sys

data = sys.stdin.read().split()

r = float(data[0])
t = float(data[1])
pi = 22 / 7

volume = pi * r * r * t
luas = 2 * pi * r * (r + t)
keliling = 2 * pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")