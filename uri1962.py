x = int(input())
for i in range(x):
  y = int(input())
  z = y - 2015
  if z < 0:
    string = str(z).split('-')
    print(string[1] , "D.C.")
  else:
    print(z+1 , "A.C.")
