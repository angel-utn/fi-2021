Algoritmo sin_titulo
	POS = 0
	NEG = 0
	CER = 0
	Escribir "Ingrese cantidad de numeros: "
	Leer CANT
	Para I<-1 Hasta CANT Con Paso 1 Hacer
		Escribir "Ingrese Numero #", I, ": "
		Leer N
		Si N > 0 Entonces
			POS = POS + 1
		SiNo
			Si N < 0 Entonces
				NEG = NEG + 1
			SiNo
				CER = CER + 1
			FinSi
		FinSi
	FinPara
	Escribir "Positivos: ", POS
	Escribir "Negativos: ", NEG
	Escribir "Ceros: ", CER
FinAlgoritmo
