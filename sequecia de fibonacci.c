//Feito em C

#include <stdio.h>
int main() {

  int i, n;

  int t1 = 0, t2 = 1;

  int proximoTermo = t1 + t2;

  printf("Coloque o numero de termos: ");
  scanf("%d", &n);

  printf("Sequencia de Fibonacci: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d, ", proximoTermo);
    t1 = t2;
    t2 = proximoTermo;
    proximoTermo = t1 + t2;
  }

  return 0;
}
