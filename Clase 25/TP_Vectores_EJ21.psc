Algoritmo sin_titulo
	DIMENSION vhoras[80], vsueldos[80]
	Para I<-0 Hasta 79 Con Paso 1 Hacer
		vsueldos[I] = 0
	FinPara
	Escribir "Procesar primer lote"
	Para I<-0 Hasta 79 Con Paso 1 Hacer
		Escribir "Ingrese Nro Empleado: "
		Leer NroEmpleado
		Escribir "Ingrese Valor Hora: " 
		Leer vhoras[NroEmpleado-1]
	FinPara
	Escribir "Procesar segundo Lote"
	Escribir "Ingrese Nro Empleado: "
	Leer NroEmpleado
	Mientras NroEmpledo != 0 Hacer
		Escribir "Ingrese total de horas: "
		Leer horasTrabajadas
		vsueldos[NroEmpleado - 1] = horasTrabajadas * vhoras[NroEmpleado - 1]
		Escribir "Ingrese Nro Empleado: "
		Leer NroEmpleado
	FinMientras
	Para I<-0 Hasta 79 Con Paso 1 Hacer
		Si vsueldos[I]>0 Entonces
			Escribir "Empleado #", I+1, " Sueldo: ", vsueldos[I]
		FinSi
	FinPara
FinAlgoritmo
