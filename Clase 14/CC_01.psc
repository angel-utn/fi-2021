Algoritmo sin_titulo
	CPT = 0
	Para D<-1 Hasta 5 Con Paso 1 Hacer
		Leer DEST
		TRDT = 0
		Para M<-1 Hasta 12 Con Paso 1 Hacer
			Leer MES,CP,TR
			CPT = CPT+CP
			TRDT = TRDT+TR
		FinPara
		Escribir TRDT
	FinPara
	Escribir CPT
FinAlgoritmo
