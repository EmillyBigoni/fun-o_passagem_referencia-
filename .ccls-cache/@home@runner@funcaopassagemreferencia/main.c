#include <stdio.h>

void area(float b , float a, float *res){

  *res= b*a;
}

int main(void){

  float base, altura, resultado;
  
  printf("Digite o valor da base: \n");
  scanf("%f",&base);
  printf("Digite o valor da altura: \n");
  scanf("%f",&altura);
  area(base, altura, &resultado);

  printf("A area do retangulo eh : %.0f", resultado);
  
  return 0;
}