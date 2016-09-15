x = str(input())
l = x.split()
pulo = int(l[0])
canos = int(l[1])
lista = []
x = str(input())
lista1 = x.split()
a = 101
for i in range(canos):
    if a != 101:
         if(int(lista1[i]) > a):
             dif = int(lista1[i]) - a
         else:
             dif = a - int(lista1[i])
         if dif > pulo:
             print("GAME OVER")
             break
    a = int(lista1[i])
else:
    print("YOU WIN")
