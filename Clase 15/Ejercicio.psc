Algoritmo sin_titulo
	Escribir "Curso: "
	Leer Curso
	Mientras Curso >= 0 Hacer
		Cantidad = 0
		eMax = 0
		CursoA = Curso
		Mientras CursoA == Curso Hacer
			Escribir "Edad: "
			Leer Edad
			Cantidad = Cantidad + 1
			Si Edad > eMax Entonces
				eMax = Edad
			FinSi
			Escribir "Curso: "
			Leer Curso
		FinMientras
		Escribir "Para el curso ", CursoA, " la edad maxima es: ", eMax
	FinMientras
	Escribir "Cantidad Total: ", Cantidad
FinAlgoritmo
