Algoritmo sin_titulo
	A_SUMAE = 0
	B_SUMAE = 0
	B_CANT = 0
	C_CANT = 0
	Para I<-1 Hasta 50 Con Paso 1 Hacer
		Leer E, A
		// PUNTO A
		A_SUMAE = A_SUMAE + E
		// PUNTO B
		Si (A >=1.6) && (A<=1.8) Entonces
			B_SUMAE = B_SUMAE + E
			B_CANT = B_CANT + 1
		FinSi
		// PUNTO C
		Si A>1.7 Entonces
			C_CANT = C_CANT + 1
		FinSi
	FinPara
	Escribir "A) Promedio: ", (A_SUMAE/50)
	Si B_CANT != 0 Entonces
		Escribir "B) Promedio: ", (B_SUMAE/B_CANT)
	SiNo
		Escribir "B) No hubo personas con esas alturas." 
	FinSi
	Escribir "C) Cantidad: ", C_CANT
FinAlgoritmo
