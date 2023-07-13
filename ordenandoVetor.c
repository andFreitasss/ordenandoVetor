#include <stdio.h>

void vetOrdenado(int v[], int n);

int main(void) {
  int vet[10];
  int i;

 printf("\nInforme 10 numeros para o vetor:\n");
  
  for(i=0; i<10; i++){
   scanf("%d", &vet[i]);
 }
  
  printf("\nEstado atual do vetor:\n");

  for (i = 0; i < 10; i++) {
    printf("%d\t", vet[i]);
  }

  vetOrdenado(vet, 10);

  printf("\n\nVetor ordenado:\n");

  for (i = 0; i < 10; i++) {
    printf("%d\t", vet[i]);
  }

  return 0;
}

void vetOrdenado(int v[], int n) {
  int i, j, temp;

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}
