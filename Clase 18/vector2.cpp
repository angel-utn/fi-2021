///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
///Un comercio registra sus ventas de la siguiente manera:
///Por cada venta se almacena el d�a de la venta, y el importe.
///Dado el lote de registros correspondientes al mes de julio, calcular e informar
///la recaudaci�n diaria.
///No se sabe la cantidad de ventas. Para indicar el fin del lote de registros se puso
///un valor de d�a igual a0;
///Calcular el d�a de la recaudaci�n m�xima.
///Calcular el d�a de la recaudaci�n m�nima. No se debe tomar en cuenta los d�as sin recaudaci�n
///Suponer que hay s�lo un d�a con esa recaudaci�n m�nima
int main(){
    int dia, i, diaMax, posMax, diaMin, posMin;
    float importe, vImporte[31]={0}, importeMax=0, importeMin;
    cout<<"INGRESE EL DIA: ";
    cin>>dia;
    while(dia!=0){
        cout<<"INGRESE EL IMPORTE: ";
        cin>>importe;
        vImporte[dia-1]=vImporte[dia-1]+importe;

        cout<<"INGRESE EL DIA: ";
        cin>>dia;
    }
    cout<<"FIN DEL INGRESO DE DATOS"<<endl;
    system("pause");
    cout<<"SE MUESTRAN LA RECAUDACION DE LOS DIAS DONDE HUBO VENTAS"<<endl<<endl;
    for(i=0;i<31;i++){
        if(vImporte[i]>0){
                cout<<"DIA: "<<i+1<<"\t"<<vImporte[i]<<endl;
        }
    }
    cout<<"RECAUDACION DEL DIA 8: "<<vImporte[7]<<endl;
    ///D�a de m�s recaudaci�n
    for(i=0;i<31;i++){
        if(vImporte[i]>importeMax){
                importeMax=vImporte[i];
                posMax=i;
        }
    }
    diaMax=posMax+1;
    cout<<"DIA DE MAYOR RECAUDACION: "<<diaMax;
    cout<<"\t"<<"CON UNA RECAUDACION DE: "<<vImporte[posMax]<<endl;


	importeMin=vImporte[0];
	posMin=0;
	for(i=1;i<31;i++){
        if(vImporte[i]<importeMin){
                importeMin=vImporte[i];
                posMin=i;
        }
    }
    diaMin=posMin+1;
    cout<<"DIA DE MENOR RECAUDACION: "<<diaMin;
    cout<<"\t"<<"CON UNA RECAUDACION DE: "<<vImporte[posMin]<<endl<<endl;

/*
	posMin=-1;
	for(i=0;i<31;i++){
        if((vImporte[i]<importeMin ||posMin==-1) && vImporte[i]!=0){
                importeMin=vImporte[i];
                posMin=i;
        }
    }
    diaMin=posMin+1;
    cout<<"DIA DE MENOR RECAUDACION SIN TENER EN CUENTA EL VALOR RECAUDACION 0: "<<diaMin;
    cout<<"\t"<<"CON UNA RECAUDACION DE: "<<vImporte[posMin]<<endl;
*/

	importeMin=importeMax;
	posMin=posMax;
	for(i=0;i<31;i++){
        if(vImporte[i]<importeMin && vImporte[i]!=0){
                importeMin=vImporte[i];
                posMin=i;
        }
    }
    diaMin=posMin+1;
    cout<<"DIA DE MENOR RECAUDACION SIN TENER EN CUENTA EL VALOR RECAUDACION 0: "<<diaMin;
    cout<<"\t"<<"CON UNA RECAUDACION DE: "<<vImporte[posMin]<<endl;

	cout<<endl;
	system("pause");
	return 0;
}
