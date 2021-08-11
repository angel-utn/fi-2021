Algoritmo sin_titulo
	// DIMENSIONO EL VECTOR
	Dimension vEdades[30]
	// Inicializamos el vector en CERO
	Para I<-0 Hasta 29 Con Paso 1 Hacer
		vEdades[I] = 0
	FinPara
	// CARGO EL VECTOR
	Para I<-0 Hasta 29 Con Paso 1 Hacer
		Escribir 'Ingrese Edad: '
		Leer vEdades[I]
	FinPara
	// SUMO TODO EL VECTOR
	SUMA = 0
	Para I<-0 Hasta 29 Con Paso 1 Hacer
		SUMA = SUMA+vEdades[I]
	FinPara
	// CALCULO EL PROMEDIO
	PROMEDIO = SUMA/30
	// COMPRUEBO CUANTOS SON MAYORES AL PROMEDIO
	CANTIDAD = 0
	Para I<-0 Hasta 29 Con Paso 1 Hacer
		Si vEdades[I]>PROMEDIO Entonces
			CANTIDAD = CANTIDAD+1
		FinSi
	FinPara
	Escribir 'Las edades mayores al promedio fueron: ',CANTIDAD
FinAlgoritmo
