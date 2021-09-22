/*
Enunciado: https://docs.google.com/document/d/1CJjKga1UPx22n2lsqtgo7VPOXKAojTIZsP8BpQ3mtJI/edit
*/
#include <iostream>
using namespace std;

int posicionMinimoVector(int vec[], int tam){
    int i, minPos=0;
    for(i=1; i<tam; i++){
        if (vec[i] < vec[minPos]){
            minPos = i;
        }
    }
    return minPos;
}
int posicionMaximoVector(int vec[], int tam){
    int i;
    int maximo = vec[0];
    int maxPos = 0;

    for(i=1; i<tam; i++){
        if (vec[i] > maximo){
            maximo = vec[i];
            maxPos = i;
        }
    }
    return maxPos;
}

int main(){
    int empleado, modelo, mediopago, dia, sede;
    int i;

    //A
    int cantModelo[15] = {};
    int minModelo;
    // B
    int cantMedioPago[10] = {};
    int maxMedioPago;
    // C
    int cantSede[4] = {};

    cout << "Empleado: ";
    cin >> empleado;

    while(empleado != 0){
        cout << "Modelo: ";
        cin >> modelo;
        cout << "Forma de medio de pago: ";
        cin >> mediopago;
        cout << "Día: ";
        cin >> dia;
        cout << "Sede: ";
        cin >> sede;

        //A
        cantModelo[modelo-1] = cantModelo[modelo-1] + 1;
        //B
        if (dia <= 15){
            cantMedioPago[mediopago-1]++;
        }
        //C
        cantSede[sede-1]++;

        cout << "Empleado: ";
        cin >> empleado;
    }
    cout << endl << "Punto A" << endl;
    minModelo = posicionMinimoVector(cantModelo, 15);
    cout << "El modelo con menos atenciones: " << minModelo + 1 << endl;

    cout << endl << "Punto B" << endl;
    maxMedioPago = posicionMaximoVector(cantMedioPago, 10);
    cout << "El medio de pago con más utilizado la primera quincena: " << maxMedioPago + 1 << endl;
    cout << "La cantidad es: " << cantMedioPago[maxMedioPago] << endl;

    cout << endl << "Punto C" << endl;
    for(i=0; i<4; i++){
        cout << "Sede: " << i+1 << endl;
        cout << "Cantidad: " << cantSede[i] << endl;
    }

    return 0;
}
