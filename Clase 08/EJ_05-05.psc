Algoritmo sin_titulo
	HayPos = FALSO
	HayNeg = FALSO
	Para I<-1 Hasta 5 Con Paso 1 Hacer
		Leer N
		Si N>0 Entonces
			Si HayPos == FALSO Entonces
				HayPos = Verdadero
				MP = N
			FinSi
			Si N<MP Entonces
				MP = N
			FinSi
		FinSi
		Si N<0 Entonces
			Si HayNeg == FALSO Entonces
				HayNeg = VERDADERO
				MN = N
			FinSi
			Si N>MN Entonces
				MN = N
			FinSi
		FinSi
	FinPara
	Si HayPos == VERDADERO Entonces
		Escribir "Min Pos: ", MP
	SiNo
		Escribir "No hubo positivos "
	FinSi
	Si HayNeg == VERDADERO Entonces
		Escribir "Max Neg: ", MN
	SiNo
		Escribir "No hubo negativos"
	FinSi
FinAlgoritmo
