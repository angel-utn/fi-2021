/*
    Hacer un programa para ingresar por teclado tres caracteres.
    Luego emitir un cartel por pantalla la cantidad de veces
    que aparece la letra 'A' o 'a'.
*/
#include <iostream>
using namespace std;

int main(){
    char car1, car2, car3;
    int cant=0;

    cout << "Ingresar letra: ";
    cin >> car1;
    cout << "Ingresar letra: ";
    cin >> car2;
    cout << "Ingresar letra: ";
    cin >> car3;

    if (car1 == 'A' || car1 == 'a'){
        cant = cant + 1;
    }
    if (car2 == 'A' || car2 == 'a'){
        cant = cant + 1;
    }
    if (car3 == 'A' || car3 == 'a'){
        cant++; // Equivalente a cant = cant + 1; Promoción no válida para pseint
    }

    cout << endl;
    cout << "Cantidad de letras A: " << cant;

    return 0;
}
