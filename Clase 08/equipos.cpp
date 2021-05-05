#include <iostream>
using namespace std;

int main(){
    int e, p, nro;
    char res;

    int ganados;

    for(e=1; e<=5; e++){
        cout << "Equipo # " << e << endl;
        cout << "-------------------------" << endl;
        cout << "   Nro equipo: ";
        cin >> nro;
        ganados = 0;
        for(p=1; p<=4; p++){
            cout << "   Resultado del partido # " << p << ": ";
            cin >> res;
            if (res == 'G'){
                ganados++;
            }
        }
        cout << endl;
        cout << "Partidos ganados: " << ganados << endl << endl;
    }

    return 0;
}
