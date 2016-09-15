#include <bits/stdc++.h>
using namespace std;

int main()
{
  int day , month , falta;
  int Meses[13] = {0,31,60,91,121,152,182,213,244,274,305,335,360};
  while(scanf("%d %d",&month , &day) != EOF)
  {
     if(day == 25 && month == 12)
        printf("E natal!\n");
     else if(day == 24 && month == 12)
        printf("E vespera de natal!\n");
     else if(day > 25 && month == 12)
        printf("Ja passou!\n");
     else
     {
        falta = Meses[12] - day - Meses[month-1];
        printf("Faltam %d dias para o natal!\n", falta);
     }
  }
  return 0;
}
