x = str(input())
l = x.split()
hS = int(l[0])
tV = int(l[1])
fuso = int(l[2])
n = hS + tV + fuso
if n < 0:
    n = 24 + n
if n >= 24:
    n = n - 24
print(n)
