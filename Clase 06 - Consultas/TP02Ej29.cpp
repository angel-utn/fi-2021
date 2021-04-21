#include <iostream>
using namespace std;

int main(){
    int edad, estatura, estado;
    float peso, x;

    cout << "Edad: ";
    cin >> edad;
    cout << "Estatura (en cms): ";
    cin >> estatura;
    cout << "Peso (en kgs): ";
    cin >> peso;

    x = (estatura-peso)/100;

    if (edad <= 20){
        if (x >= 0.9 && x <= 1.1){
            estado = 1;
        }
        else{
            if (x > 1.1){
                estado = 2;
            }
            else{
              estado = 3;
            }
        }
    }
    else{
        if (edad > 20 && edad <=30){
            if (x >= 0.85 && x <= 1.15){
                estado = 1;
            }
            else{
                if (x > 1.15){
                    estado = 2;
                }
                else{
                  estado = 3;
                }
            }
        }
        else{
            if (edad > 30 && edad <=40){
                if (x >= 0.8 && x <= 1.1){
                    estado = 1;
                }
                else{
                    if (x > 1.1){
                        estado = 2;
                    }
                    else{
                      estado = 3;
                    }
                }
            }
            else{
                // Resolver última columna del ejercicio
            }
        }
    }
    cout << endl << endl;
    switch(estado){
        case 1:
            cout << "Peso normal";
        break;
        case 2:
            cout << "Bajo peso";
        break;
        case 3:
            cout << "Excedido";
        break;
    }
    return 0;
}
