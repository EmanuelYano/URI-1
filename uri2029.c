#include <stdio.h>

int main()
{
  double vol , diametro , area , altura;
  while(scanf("%lf %lf" , &vol , &diametro) != EOF)
  {
    area = (3.14*(diametro*diametro))/4;
    altura = vol / area;
    printf("ALTURA = %.2lf\nAREA = %.2lf\n" , altura , area);
  }
  return 0;
}
