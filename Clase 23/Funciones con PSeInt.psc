Algoritmo Clase_15
	CANTIDAD = 5
	Dimension vNumeros[5], vNum2[3]
	CargarVector(vNumeros,CANTIDAD)
	MostrarVector(vNumeros,CANTIDAD)
	Max = CalcularMaximo(vNumeros,CANTIDAD)
	Min = CalcularMinimo(vNumeros,CANTIDAD)
	Escribir 'El maximo es: ',Max
	Escribir 'El minimo es: ',Min
	CargarVector(vNum2,3)
	Max = CalcularMaximo(vNum2,3)
	Escribir 'El maximo es: ',Max
FinAlgoritmo

Funcion CargarVector(V,CANT)
	Para I<-0 Hasta CANT-1 Con Paso 1 Hacer
		Leer V[I]
	FinPara
FinFuncion

Funcion M = CalcularMaximo(V,CANT)
	M = V[0]
	Para I<-1 Hasta CANT-1 Con Paso 1 Hacer
		Si V[I]>M Entonces
			M = V[I]
		FinSi
	FinPara
FinFuncion

Funcion M = CalcularMinimo(V,CANT)
	M = V[0]
	Para I<-1 Hasta CANT-1 Con Paso 1 Hacer
		Si V[I]<M Entonces
			M = V[I]
		FinSi
	FinPara
FinFuncion

Funcion MostrarVector(Vec, T)
	Para I<-0 Hasta T-1 Con Paso 1 Hacer
		Escribir Vec[I]
	FinPara
FinFuncion
