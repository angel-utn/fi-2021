Algoritmo sin_titulo
	Para I<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'Numero #',I
		Leer N
		Si (I==1) Entonces
			MAX = N
			MIN = N
		SiNo
			Si N>MAX Entonces
				MAX = N
			SiNo
				Si N<MIN Entonces
					MIN = N
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'Maximo: ',MAX
	Escribir 'Minimo: ',MIN
FinAlgoritmo
