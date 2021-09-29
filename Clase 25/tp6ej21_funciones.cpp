///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

void cargarValorHora(float vValorHora[80], int tam){
    int i, empleado;
    cout<<"INGRESE EL VALOR DE LA HORA DE CADA EMPLEADO"<<endl;
    for(i=0;i<tam;i++){
        cout<<"EMPLEADO: ";
        cin>>empleado;
        cout<<"VALOR DE LA HORA: ";
        cin>>vValorHora[empleado-1];

    }
}

void cargarHorasTrabajadas(int vCantHoras[80]){
    int empleado;
    cout<<"INGRESE LAS HORAS TRABAJADAS"<<endl;
    cout<<"EMPLEADO: ";
    cin>>empleado;
    while(empleado!=0){
        cout<<"CANTIDAD DE HORAS TRABAJADAS: ";
        cin>>vCantHoras[empleado-1];
        cout<<"EMPLEADO: ";
        cin>>empleado;
    }

}

void mostrarSueldos(float vValorHora[], int vCantHoras[], int tam){
    int i;
    cout<<"SUELDOS DEL MES"<<endl;
    for(i=0;i<tam;i++){
        cout<<endl<<"EMPLEADO: "<<i+1<<endl;
        cout<<"SUELDO: "<<vValorHora[i]*vValorHora[i]<<endl;

    }
}


int main(){
    float vValorHora[80]={};
    int vCantHoras[80]={};
    cargarValorHora(vValorHora, 2);
    cargarHorasTrabajadas(vCantHoras);
	mostrarSueldos(vValorHora, vCantHoras, 2);

	cout<<endl;
	system("pause");
	return 0;
}
