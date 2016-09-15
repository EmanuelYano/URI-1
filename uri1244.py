x = int(input())
for i in range(x):
    x = str(input())
    l = x.split()
    novaL = []
    for a in enumerate(l):
        novaL.append(a)
    #print(novaL)
    novaL = sorted(novaL,key=lambda x: (len(x[1]),x[0]))
    novaL.reverse()
    print(novaL)
