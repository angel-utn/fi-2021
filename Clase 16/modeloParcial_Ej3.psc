Algoritmo sin_titulo
	TOT_C = 0; TOT_O = 0; TOT_V = 0
	Para P<-1 Hasta 3 Con Paso 1 Hacer
		CANT_A = 0
		Escribir "Productor: "
		Leer PRO
		Para A<-1 Hasta 5 Con Paso 1 Hacer
			Escribir "Año:", A
			Escribir "Cerdos: "
			Leer CNC
			Escribir "Ovejas: "
			Leer CNO
			Escribir "Vacas: "
			Leer CNV
			Si CNC == 0 Entonces
				CANT_A = CANT_A + 1
			FinSi
			Si A == 1 Entonces
				TOT_A = CNC + CNO + CNV
				Si (P == 1)||(PRO_MIN_CANT > TOT_A) Entonces
					PRO_MIN_CANT = TOT_A
					PRO_MIN = PRO
				FinSi
			FinSi
			TOT_C = TOT_C + CNC
			TOT_O = TOT_O + CNO
			TOT_V = TOT_V + CNV
		FinPara
		Escribir "A: Cantidad de Años: ", CANT_A
	FinPara
	Escribir "B: Productor con menos animales es: ", PRO_MIN
	TOTAL = TOT_C + TOT_O + TOT_V
	Escribir "Porcentaje Cerdos: ", (TOT_C / TOTAL * 100), "%"
	Escribir "Porcentaje Ovejas: ", (TOT_O / TOTAL * 100), "%"
	Escribir "Porcentaje Vacas: ", (TOT_V / TOTAL * 100), "%"
FinAlgoritmo
