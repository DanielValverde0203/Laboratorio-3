#include <stdio.h>

int Minimo(int array[], int n) {  // esta funcion encuentra el el minimo dentro del arreglo por medio de un for, que se detiene cuando este es quivalente al mimso
    int minimo = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < minimo) {
            minimo = array[i];
        }
    }
    return minimo;
}


int Maximo(int array[], int n) {  // su funcion es la mimsa que la anterior, pero esta vez
    int maximo = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
    }
    return maximo;
}


void encontrarMaxMin(const int *arreglo, int *maximo, int *minimo, int longitud) { //En esta funcion se aplico el mismo modelo de la presentacion, ya que cumple la finalidad de almacenar los valroes utilizando punteros
 *maximo = *minimo = *arreglo;
 for (int i = 1; i < longitud; i++) {
 if (*(arreglo + i) > *maximo) {  
 *maximo = *(arreglo + i);
 }
 }
}

int main() { // la funcion main contiene el arreglo e invoca las funciones para encontrar e imprimir los maximos y minimos
    int array[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int n = sizeof(array) / sizeof(array[0]);

    int minimo = Minimo(array, n);
    int maximo = Maximo(array, n);

    printf("valor mínimo: %d\n", minimo);
    printf("valor máximo: %d\n", maximo);

    return 0;
}