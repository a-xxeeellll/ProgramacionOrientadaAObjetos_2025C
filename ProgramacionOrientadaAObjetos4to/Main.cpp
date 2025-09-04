// Incluye el código (archivo, o biblioteca) que se pida. // Es básicamente lo mismo que el import en python o Java, 
// En este caso, está incluyendo la biblioteca iostream.
#include <iostream>
// El namespace de "std" trae un montón de funcionalidades útiles para desarrollo en c++ que son Standard. 
// De ahí su nombre STanDard STD.
using namespace std;

#include "ArchivosEjemplo.h"
#include "ArchivoEjemplo2.h"
#include "TareaEjemplo.h"



// Por qué 'C' se llama 'C'? Porque existen los lenguajes A y B

// C++ es una alternativa al lenguaje 'C'

// por qué se llaman archivos ".cpp"
// C Plus Plus -> C++


// Definir y Declarar
// Declara es decir: Esto existe. Esto puede ser una variable, una función, una estructura, una clase, entre otros.
// Definir es decir: Qué hace, qué tiene dentro, para que sirve, etc.


// Declarar una variable:
int myInt = 7; // a partir de esta línea, el código ya sabe que esta variable existe.
int myOtherInt = 5; // esta es declaración Y también asignación de valor.

// Intenten evitar declarar variables con el mismo nombre dentro de Contextos de ejecución anidados 
/* 
int Suma(int a, int b)
{
	int resultado = a + b;
	if (resultado < 0)
	{
		int resultado2 = 0;
		cout << resultado2;
	}
	return resultado;
}
*/

int Suma(int a, int b)
{
	int resultado = a + b;
	return resultado;
}

int Resta(int a, int b)
{
	int resultado = a - b;
	return resultado;
}

int Division(int a, int b)
{
	return a / b;
}


// estos cambios los hizo juanito en su máquina
int FuncionJuanito()
{
	cout << "esta es la maravillosa funcion de Juanito" << endl;
}

// Estos cambios los hice yo en mi máquina.
int FuncionAdrian()
{
	cout << "esta es la funcion de Adrian" << endl;
}







// Qué es un Main?
// ¿Por qué Main? Main significa principal, se refiere a que es el punto principal de entrada de la ejecución de este programa
// ¿Por qué int? Más específicamente Main es una función, entonces necesita cumplir con la sintáxis de una función.
	// tipoDeData + Nombre +( parámetros* ) +{ otroCódigo }.
	// Main es una función que debe regresar un valor entero (int).

int main()
{
	// En el main del proyecto, mandan a llamar el Main de la tarea en específico que estén entregando.
	MainTareaEjemplo();

	// Para la segunda tarea, por ejemplo, ya solo pondrían la llamada al Main de esa nueva tarea.
	// MainTareaEjemplo2();

	// Para la tarea 3, lo mismo.
	// MainTareaEjemplo3();



	// Suma(1, 2);

	// cout está dentro del namespace de std, por necesitamos incluirlo en el archivo.
	// cout viene de C que es Console y out que es salida. Entonces lo que hace es mandar información de salida a la consola.
	// endl es End Line, que sería terminar línea que lo que hace es pasarse a la siguiente línea de texto.
	// '\n' es básicamente lo mismo que el endl. 
	cout << "hola mundo \n hola mundo 2 \n"; 
	// cout << "hola mundo 2" << endl;
	cout << "Suma(1, -2) es: " << Suma(1, -2) << endl;
	
	cout << "Multiplicacion(2, 4) es: " << Multiplicacion(2, 4) << endl;


	cout << "Division(2, 4) es: " << Division(2, 4) << endl;


	// Retorna el código de error de la ejecución del Main.
	// El código "0" significa que no hubo error alguno. Significa que el main terminó satisfactoriamente.
	return 0;
}


