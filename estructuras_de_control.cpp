//Código con estructuras de control, recepción de datos del usuario, switch-case, if:

#include <iostream>
#include <iomanip> // Requerido para std::setprecision
#include <cmath> // Librería matemática para operaciones avanzadas
using namespace std;

int main() {
    char opcion;
    
    cout << "1. if" << endl;
    cout << "2. switch" << endl;
    cout << "Elige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case '1': {
            cout << "¡Elegiste IF! Vamos a comprobar si ingresaste un número par." << endl;
            int num;
            cout << "Ingresa un número: ";
            cin >> num;

            if (num % 2 == 0) {
                cout << num << " es par. ¡Buena elección!" << endl;
                if (num > 10) {
                    cout << "¡Vaya! También es mayor que 10." << endl;
                } else if (num == 10) {
                    cout << "Exactamente 10, buen número redondo." << endl;
                } else {
                    cout << "Es par, pero menor o igual a 10." << endl;
                }
            } else {
                cout << num << " es impar. ¡Una elección única!" << endl;
                if (num < 5) {
                    cout << "¡Y también es bastante pequeño!" << endl;
                } else if (num > 15) {
                    cout << "Es impar y mayor que 15. ¡Interesante!" << endl;
                } else {
                    cout << "Es impar y está en un rango medio." << endl;
                }
            }

            cout << "Ahora contemos hasta tu número con un bucle for:" << endl;
            for (int i = 1; i <= num; i++) {
                cout << i << " ";
            }
            cout << endl;

            cout << "Ahora hagamos algunas operaciones matemáticas." << endl;
            cout << "La raíz cuadrada de " << num << " es " << sqrt(num) << endl;
            cout << "El logaritmo natural de " << num << " es " << log(num) << endl;
            cout << "El seno de " << num << " es " << sin(num) << endl;
            cout << "El coseno de " << num << " es " << cos(num) << endl;
            break;
        }
        case '2': {
            cout << "¡Elegiste SWITCH! Vamos a determinar tu animal espiritual." << endl;
            int numero;
            cout << "Ingresa un número del 1 al 5: ";
            cin >> numero;

            switch (numero) {
                case 1:
                    cout << "¡Eres un majestuoso Águila!" << endl;
                    break;
                case 2:
                    cout << "¡Eres un poderoso Tigre!" << endl;
                    break;
                case 3:
                    cout << "¡Eres un sabio Búho!" << endl;
                    break;
                case 4:
                    cout << "¡Eres un veloz Delfín!" << endl;
                    break;
                case 5:
                    cout << "¡Eres un imponente Dragón!" << endl;
                    break;
                default:
                    cout << "Hmm, no puedo determinar tu animal espiritual. Intenta con un número del 1 al 5." << endl;
                    if (numero < 1) {
                        cout << "El número es demasiado pequeño." << endl;
                    } else if (numero > 5) {
                        cout << "El número es demasiado grande." << endl;
                    }
            }
            break;
        }
        default:
            cout << "Opción no encontrada. Por favor, ingresa 1 o 2." << endl;
    }

    cout << "¿Quieres repetir el programa? (s/n): ";
    char repetir;
    cin >> repetir;
    while (repetir == 's' || repetir == 'S') {
        main(); // Llamada recursiva para reiniciar el programa
    }

    cout << "¡Gracias por participar!" << endl;
    return 0;
}


//Esto es para ejecutarlo desde la terminal:
//Nos vamos a la misma carpeta donde esta nuestro documento .cpp, para saber si estamos en la carpeta, siempre ejecutar "ls"
//Copiamos lo siguiente en terminal
// g++ prueba4.cpp -o prueba4
// ./prueba4
