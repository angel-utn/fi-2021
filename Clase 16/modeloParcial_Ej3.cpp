/// Modelo de Parcial - Ejercicio 3
#include <iostream>
using namespace std;

int main(){
    const int CANT_PRODUCTORES = 10;
    const int CANT_ANIOS = 5;
    int p, a;
    int cod, anio, cerdos, ovejas, vacas;
    // A
    int cantAnios;
    // B
    int codProdMin;
    int cantMin;
    int animales;
    // C
    int tcerdos, tovejas, tvacas;
    int total;
    tcerdos = tovejas = tvacas = 0;
    float pcerdos, povejas, pvacas;

    for (p=1; p<=CANT_PRODUCTORES; p++){
        cantAnios = 0;
        cout << "Nro productor: ";
        cin >> cod;

        for(a=1; a<=CANT_ANIOS; a++){
            cout << "Año: " << a << endl;
            cout << "Cerdos: ";
            cin >> cerdos;
            cout << "Ovejas: ";
            cin >> ovejas;
            cout << "Vacas: ";
            cin >> vacas;
            // A
            if (cerdos == 0){
                cantAnios++;
            }
            // B
            if (a == 1){
                animales = cerdos + ovejas + vacas;
                if (p == 1){
                    cantMin = animales;
                    codProdMin = cod;
                }
                else{
                    if (animales < cantMin){
                        cantMin = animales;
                        codProdMin = cod;
                    }
                }
            }
            // C
            tcerdos = tcerdos + cerdos;
            tvacas += vacas;
            tovejas += ovejas;
        }
        cout << endl << "Punto A" << endl;
        cout << "Productor: " << cod << endl;
        cout << "Cantidad : " << cantAnios << endl << endl;

    }
    cout << endl << "Punto B" << endl;
    cout << "Productor mínimo: " << codProdMin << endl << endl;

    cout << endl << "Punto C" << endl;
    total = tcerdos + tvacas + tovejas;
    pcerdos = tcerdos * 100.0 / total;
    pvacas = tvacas * 100.0 / total;
    povejas = tovejas * 100.0 / total;
    cout << "Cerdos: " << pcerdos << " %" << endl;
    cout << "Ovejas: " << povejas << " %" << endl;
    cout << "Vacas : " << pvacas << " %" << endl << endl;
    return 0;
}
