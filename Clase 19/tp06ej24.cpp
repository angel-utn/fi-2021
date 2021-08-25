/**
24) Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con referencia a la predilección de color de los pantalones (r=rojo, a=azul, b=blanco, o=otros).
Para ello se ingresan los siguiente datos para cada encuesta efectuada:
- Edad del encuestado
- Color elegido (r,a,b,o)
- Sexo( M o F)

El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
a) El color más votado entre las mujeres
b) Para cada color, la década de edades que más lo votó. Se entiende por década de edad las personas cuyas edades están en el rango indicado en la siguiente tabla:

Década    Edad
0         1-9
1         10-19
2         20-29
…          …
9         90-99
*/

///Ejercicio:

///Autor:DEK

///Fecha:

///Comentario:



# include<iostream>

# include<cstdlib>



using namespace std;





int main(){

    char color, genero;

    int pos, edad,vColor[4]={}, i, decada ;

    int vDecadasBlanco[10]={0};



    cout<<"INGRESE LA EDAD: ";

    cin>>edad;

    while(edad!=0){

        cout<<"INGRESE EL COLOR: ";

        cin>>color;

        cout<<"INGRESE EL GENERO: ";

        cin>>genero;

        /*if(color=='r')pos=0;

        if(color=='a')pos=1;

        if(color=='b')pos=2;

        if(color=='o')pos=3;*/

        decada=edad/10;

        switch(color){

            case 'r':   pos=0;

                        break;

            case 'a':   pos=1;

                        break;

            case 'b':   pos=2;

                        vDecadasBlanco[decada]++;

                        break;

            case 'o':   pos=3;

                        break;



        }

        if(genero=='f'){

            vColor[pos]++;

        }

        cout<<"INGRESE LA EDAD: ";

        cin>>edad;

    }

    system("cls");

	/*cout<<"PARA EL ROJO HUBO "<<vColor[0]<<" VOTOS"<<endl;

    cout<<"PARA EL AZUL HUBO "<<vColor[1]<<" VOTOS"<<endl;

    cout<<"PARA EL BLANCO HUBO "<<vColor[2]<<" VOTOS"<<endl;

    cout<<"PARA OTROS HUBO "<<vColor[3]<<" VOTOS"<<endl;

    for(i=0;i<4;i++){

        switch(i){

            case 0:   cout<<"ROJO: ";

                      break;

            case 1:   cout<<"AZUL: ";

                      break;

            case 2:   cout<<"BLANCO: ";

                      break;

            case 3:   cout<<"OTROS: ";

                      break;



        }

        cout<<vColor[i]<<endl;

    }*/
    cout << "Punto A" << endl;
    cout << "Falta calcular el máximo." << endl << endl;

    cout << "Punto B" << endl;
	for(i=0;i<10;i++){

        cout<<"DECADA: "<<i<<" VOTOS: "<<vDecadasBlanco[i]<<endl;

	}

	system("pause");

	return 0;

}
