Algoritmo sin_titulo
	Dimension TIPOS[5]
	Para I<-0 Hasta 4 Con Paso 1 Hacer
		TIPOS[I] = 0
	FinPara
	ML = 0
	CANT_P = 0
	Para R<-1 Hasta 250 Con Paso 1 Hacer
		Leer CR,CCO,CCF,L,T,P
		Si L>ML Entonces
			ML = L
			ML_CR = CR
			ML_O = CCO
			ML_F = CCF
		FinSi
		Si P==1 Entonces
			CANT_P = CANT_P+1
		FinSi
		TIPOS[T-1]=TIPOS[T-1]+1
	FinPara
	Escribir 'Punto A: '
	Escribir ML_CR
	Escribir ML_O
	Escribir ML_F
	Escribir 'Punto B: ',(CANT_P/250)*100
	Para I<-0 Hasta 4 Con Paso 1 Hacer
		Escribir 'Punto C: Nro. ',I+1
		Escribir TIPOS[I]
	FinPara
FinAlgoritmo

Funcion PonerCero(V,T)
	Para I<-0 Hasta T-1 Con Paso 1 Hacer
		V[I] = 0
	FinPara
FinFuncion
