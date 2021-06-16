#include <iostream>
using namespace std;

int main(){
    const int DEST=5;
    int i, j;
    int destino, mes, pasajes;
    float rec;
    //A
    int total_pasajes = 0;
    //B
    float total_rec;

    for(i=1; i<=DEST; i++){
        cout << "Destino: ";
        cin >> destino;
        total_rec = 0;
        cout << "Mes: ";
        cin >> mes;
        while(mes != 0){
            cout << "Pasajes: ";
            cin >> pasajes;
            cout << "Recaudación: $";
            cin >> rec;
            total_rec = total_rec + rec;
            total_pasajes = total_pasajes + pasajes;
            cout << "Mes: ";
            cin >> mes;
        }
        cout << endl << "Destino: " << destino;
        cout << endl << "Total recaudado: " << total_rec;
        cout << endl << endl;
    }
    cout << endl << "Total pasajes:" << total_pasajes << endl;


    return 0;
}
