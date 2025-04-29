#include <iostream>

using namespace std;

// Función que intercambia dos valores usando punteros
void permutar(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Función auxiliar para imprimir el arreglo
void imprimirArreglo(int *arr, int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int Array[5] = {1, 2, 3, 4, 5};
    int *Pinteger = Array;

    cout << "Arreglo antes de permutar: ";
    imprimirArreglo(Array, 5);

    // Intercambiamos el primer y el último elemento
    permutar(Pinteger, Pinteger + 4);

    cout << "Arreglo después de permutar: ";
    imprimirArreglo(Array, 5);

    return 0;
}
