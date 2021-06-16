Algoritmo sin_titulo
	CPT = 0
	Para D<-1 Hasta 5 Con Paso 1 Hacer
		Leer DEST, MES
		TRDT = 0
		Mientras MES != 0 Hacer
			Leer CP,TR
			CPT = CPT+CP
			TRDT = TRDT+TR
			Leer MES
		FinMientras
		Escribir TRDT
	FinPara
	Escribir CPT
FinAlgoritmo
