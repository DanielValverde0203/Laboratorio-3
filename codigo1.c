#include <stdio.h>


int busquedaLineal(int array[], int n, int ValorEntero) {
    for (int i = 0; i < n; i++) {
        if (array[i] == ValorEntero) {
            return i;
        }
    }
    return -1; 
}


int busquedaBinaria(int array[], int n, int ValorEntero) {
    int izquierda = 0;
    int derecha = n - 1;
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (array[medio] == ValorEntero) {
            return medio;
        }
        if (array[medio] < ValorEntero) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1; 
}


int busquedaBinariaRecursiva(int array[], int izquierda, int derecha, int ValorEntero) {
    if (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (array[medio] == ValorEntero) {
            return medio;
        }
        if (array[medio] < ValorEntero) {
            return busquedaBinariaRecursiva(array, medio + 1, derecha, ValorEntero);
        }
        return busquedaBinariaRecursiva(array, izquierda, medio - 1, ValorEntero);
    }
    return -1; 
}


int ingresarValorEntero() {
    int ValorEntero;
    printf("Valor Entero: ");
    scanf("%d", &ValorEntero);
    return ValorEntero;
}

int main() {
    int array[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(array) / sizeof(array[0]);
    int ValorEntero = ingresarValorEntero();

    
    int posicionLineal = busquedaLineal(array, n, ValorEntero);
    if (posicionLineal != -1) {
        printf("Posicion del valor %d por busqueda lineal: %d\n", ValorEntero, posicionLineal);
    } else {
        printf("No se encontro el valor %d\n", ValorEntero);
    }

    
    int posicionBinaria = busquedaBinaria(array, n, ValorEntero);
    if (posicionBinaria != -1) {
        printf("Posicion del valor %d por busqueda binaria: %d\n", ValorEntero, posicionBinaria);
    } else {
        printf("No se encontr el valor %d\n", ValorEntero);
    }

   int posicionBinariaRecursiva = busquedaBinariaRecursiva(array, 0, n - 1, ValorEntero);
    if (posicionBinariaRecursiva != -1) {
        printf("Posicion del valor %d por busqueda binaria recursiva: %d\n", ValorEntero, posicionBinariaRecursiva);
    } else {
        printf("No se encontroEl valor %d\n", ValorEntero);
    }

    return 0;
}