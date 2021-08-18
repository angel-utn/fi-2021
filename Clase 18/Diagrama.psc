Algoritmo sin_titulo
	Dimension vImporte[31]
	importeMax = 0
	Para I<-0 Hasta 30 Con Paso 1 Hacer
		vImporte[I] = 0
	FinPara
	Escribir 'Ingrese dia: '
	Leer dia
	Mientras dia!=0 Hacer
		Escribir 'Ingrese importe: '
		Leer importe
		vImporte[dia-1]=vImporte[dia-1]+importe
		Escribir 'Ingrese dia: '
		Leer dia
	FinMientras
	Para I<-0 Hasta 30 Con Paso 1 Hacer
		Escribir 'Dia: ',I+1,' Importe: $ ',vImporte[I]
	FinPara
	Para I<-0 Hasta 30 Con Paso 1 Hacer
		Si vImporte[I]>importeMax Entonces
			importeMax = vImporte[I]
			diaMax = I+1
		FinSi
	FinPara
	Escribir "Dia con mayor recaudacion es: ", diaMax
FinAlgoritmo
