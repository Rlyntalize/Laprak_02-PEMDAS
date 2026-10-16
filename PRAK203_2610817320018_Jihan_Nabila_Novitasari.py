import sys

data = sys.stdin.read().split()

a = float(data[0])
b = float(data[1])
i = float(data[2])
j = float(data[3])
x = float(data[4])
y = float(data[5])

hasil = (a - b) * i / j - (x + y)
print(f"{hasil:.3f}")