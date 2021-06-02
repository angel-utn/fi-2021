/**
Se ingresan los datos con la producción de los operarios de una empresa en el
 último mes.
Cada registro contiene:
- Nro. de operario (1 a 20)
- Sector donde trabaja (1, 2, 3)
- Total de piezas defectuosas
- Total de piezas no defectuosas
Existe un total de 20 registros (uno para cada operario). Cada operario trabaja
en alguno de los tres sectores 1, 2 ó 3.

Se pide determinar e informar:
a) Para cada uno de los 3 sectores cual fue el operario que obtuvo mayor
cantidad de piezas defectuosas
b) El sector cuyos empleados totalizaron mayor porcentaje de piezas defectuosas,
 sobre el total de piezas fabricadas por el sector.
*/
#include <iostream>
using namespace std;

int main(){
    const int OPERARIOS = 5;
    int op, sector, pd, pnd, i;
    /// Punto A
    float maxpd1=-1, maxpd2=-1, maxpd3=-1;
    int maxop1, maxop2, maxop3;
    /// Punto B
    int total1, total2, total3, totald1, totald2, totald3, maxsector=0;
    float p1, p2, p3;
    total1 = total2 = total3 = totald1 = totald2 = totald3 = 0;

    for(i=1; i<=OPERARIOS; i++){
        cout << "Nro Operario: ";
        cin >> op;
        cout << "Sector: ";
        cin >> sector;
        cout << "Piezas defectuosas: ";
        cin >> pd;
        cout << "Piezas no defectuosas: ";
        cin >> pnd;
        cout << endl;
        //A y B
        switch(sector){
            case 1:
                //A
                if (pd > maxpd1){
                    maxpd1 = pd;
                    maxop1 = op;
                }
                //B
                totald1 += pd;
                total1 += pd + pnd;
            break;
            case 2:
                //A
                if (pd > maxpd2){
                    maxpd2 = pd;
                    maxop2 = op;
                }
                //B
                totald2 += pd;
                total2 += pd + pnd;
            break;
            case 3:
                //A
                if (pd > maxpd3){
                    maxpd3 = pd;
                    maxop3 = op;
                }
                //B
                totald3 += pd;
                total3 += pd + pnd;
            break;
        }
    }

    cout << endl << "Punto A" << endl;
    cout << "Sector 1: Operario " << maxop1 << " - Piezas: " << maxpd1 << endl;
    cout << "Sector 2: Operario " << maxop2 << " - Piezas: " << maxpd2 << endl;
    cout << "Sector 3: Operario " << maxop3 << " - Piezas: " << maxpd3 << endl;
    cout << endl << "Punto B" << endl;
    p1 = (float)totald1/total1*100;
    p2 = (float)totald2/total2*100;
    p3 = (float)totald3/total3*100;

    if (p1 > p2 && p1 > p3){
        maxsector = 1;
    }
    else{
        if (p2 > p3){
            maxsector = 2;
        }
        else{
            maxsector = 3;
        }
    }

    cout << "Sector con mayor porcentaje de piezas defectuosas: " << maxsector;

    return 0;
}
