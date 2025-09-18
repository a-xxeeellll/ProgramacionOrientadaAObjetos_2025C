#include "EjerciciosMemoriaDinamica.h"


void MainEjemplosMemoriaDinamica()
{
	// me da memoria del tamaño de un int, en alguna dirección de memoria aleatoria.
	// la variable myNewInt es la que nos dice cuál fue esa dirección de memoria.
	int* myNewInt = new int;

	// acá le damos un valor a la variable que está en esa dirección de memoria.
	*myNewInt = 5;

	int* myIntPointer = myNewInt; // estas dos variables apuntan a la misma dirección de memoria.

	// cuando ya no la necesites, tienes que liberar esa memoria de la variable
	delete myNewInt;
	// lo que hay que hacer es poner el valor del puntero DE TODOS LOS PUNTEROS QUE APUNTABA A ESA DIRECCIÓN, como nullptr.
	myIntPointer = nullptr;
	myNewInt = nullptr;

	// *myNewInt = 10; // truena porque no tienes permiso de escritura en esa dirección porque ya hiciste delete.

	// este sigue apuntando a la dirección de memoria que se había obtenido con el new, pero ahí dentro de esa dirección
	// ya no hay datos válidos, se borraron al hacer el delete.
	// Dangling pointer = puntero colgante, significa que un puntero cree que todavía apunta a algo válido, pero ya no lo es.
	if (myIntPointer == nullptr)
		return;

	*myIntPointer = 10; // ? sí te deja escribir, porque la dirección de memoria NO está reservada, pero no deberías!



}