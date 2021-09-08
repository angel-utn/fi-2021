Algoritmo sin_titulo
	DIMENSION vPos[100], vNeg[100]
	cantPos = 0
	cantNeg = 0
	Para I<-1 Hasta 100 Con Paso 1 Hacer
		Leer N
		Si N > 0 Entonces
			vPos[cantPos] = N
			cantPos = cantPos + 1
		SiNo
			Si N < 0 Entonces
				vNeg[cantNeg] = N
				cantNeg = cantNeg + 1
			FinSi
		FinSi
	FinPara
	Para P<-0 Hasta cantPos-1 Con Paso 1 Hacer
		Escribir "Positivo: ", vPos[P]
	FinPara
	Para N<-0 Hasta cantNeg-1 Con Paso 1 Hacer
		Escribir "Negativo: ", vNeg[N]
	FinPara
FinAlgoritmo
