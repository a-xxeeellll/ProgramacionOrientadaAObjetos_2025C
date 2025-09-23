#pragma once

#include<iostream>
using namespace std;

class Triangle
{
public:
	// constructor.
	// Sin tipo de retorno, su nombre es exactamente el mismo que el de la clase o struct a que pertenece
	// puede recibir parámetros o no. Si no los recibe, se le conoce como el constructor por defecto.
	Triangle(); // este no recibe parámetros, entonces es un constructor por defecto.


	/*
	No puedes tener dos constructores que reciban los mismo parámetros.
	Triangle()
	{
		cout << "también soy el constructor por defecto" << endl;
	}*/

	// sí puedes tener varios constructores que reciban distintos parámetros. Como si fuera una sobrecarga de función.
	 Triangle(float altura, float base);

	// ¿Qué pasa si no tienes un constructor por defecto? D: 
	// Si no hay constructor por defecto PERO sí hay otro u otros constructores, entonces tú no puedes
	// instanciar objetos de esa clase sin un constructor específico.
	// Pero si no pones el constructor por defecto NI TAMPOCO hay otros constructores, entonces hay un 
	// constructor por defecto "automático", que no hace nada, excepto generar el objeto.
	// SÍ va a haber veces en que no querramos que haya un constructor por defecto.

	void ImprimirTriangulo()
	{
		cout << "Imprimiendo triángulo: base: " << base << " altura: " << altura << endl;
	}

	float altura;
	float base;

};

// Muy rara vez van a usar una función para construir un objeto en vez de un constructor. 
// Pero en algunos patrones de diseño sí se usa. Los veremos más adelante.
Triangle GenerarTriangulo(float altura, float base);