#include <iostream>
using namespace std;

int main(){
    const int EMPLEADOS = 5;
    int nroEmpleado, totalHoras, i;
    float valorHora, vHoras[EMPLEADOS], vSueldos[EMPLEADOS]={};
    float sueldoBase, sueldoExtra;

    // Lote 1
    cout << "Carga de valor hora de los empleados" << endl;
    cout << "------------------------------------" << endl;

    for(i=1; i<=EMPLEADOS; i++){
        cout << "Empleado  :  ";
        cin >> nroEmpleado;
        cout << "Valor hora: $";
        cin >> valorHora;
        vHoras[nroEmpleado-1] = valorHora;
    }

    // Lote 2
    cout << endl << "Carga de horas trabajadas de los empleados" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Empleado: ";
    cin >> nroEmpleado;
    while (nroEmpleado != 0){
        cout << "Horas trabajadas en el mes: ";
        cin >> totalHoras;
        if (totalHoras > 140){
            sueldoExtra = (totalHoras-140)*vHoras[nroEmpleado-1]*2;
            sueldoBase = 140*vHoras[nroEmpleado-1];
        }
        else{
            sueldoExtra = 0;
            sueldoBase = totalHoras*vHoras[nroEmpleado-1];
        }
        vSueldos[nroEmpleado-1] = sueldoBase + sueldoExtra;
        cout << "Empleado: ";
        cin >> nroEmpleado;
    }

    cout << endl << endl;
    cout << "Listado de sueldos: " << endl;
    cout << "---------------------" << endl;
    for(i=0; i<EMPLEADOS; i++){
        if (vSueldos[i] != 0){
            cout << "Empleado #" << i+1 << endl;
            cout << "Sueldo $ " << vSueldos[i] << endl << endl;
        }
    }

    return 0;
}
