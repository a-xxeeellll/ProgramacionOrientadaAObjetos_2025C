#include "ClaseConstructoresYDestructores.h"

Triangle::Triangle()
{
	cout << "soy el constructor por defecto" << endl;
	// podríamos inicializar sus variables en 0 u otro valor que queramos
	base = 0;
	altura = 0;
}


Triangle::Triangle(float altura, float in_base)
{
	cout << "soy el constructor que recibe altura y base." << endl;
	// como recordatorio: "this" se refiere a la instancia específica de esta clase/struct que 
	// está mandando a llamar esta función.
	this->altura = altura;
	base = in_base; // aquí no uso el this porque la variable in_base tiene distinto nombre de base, entonces no hay ambiguedad.
}


Triangle GenerarTriangulo(float altura, float base)
{
	Triangle myTriangle;
	myTriangle.altura = altura;
	myTriangle.base = base;
	return myTriangle;
}