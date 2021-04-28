Algoritmo sin_titulo
	Para I<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'Numero #',I
		Leer N
		Si (I==1)||(N>MAX) Entonces
			MAX = N
			POS = I
		FinSi
	FinPara
	Escribir 'Maximo: ',MAX
	Escribir 'Posicion: ',POS
FinAlgoritmo
