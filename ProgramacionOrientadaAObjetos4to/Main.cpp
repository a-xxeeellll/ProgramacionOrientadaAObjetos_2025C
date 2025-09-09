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
	return 0;
}

// Estos cambios los hice yo en mi máquina.
int FuncionAdrian()
{
	cout << "esta es la funcion de Adrian" << endl;
	return 0;
}


enum TipoDeUsuario
{
	Alumno=0,
	Profesor,
	Admin = 255,
	Otro
};

//enum TipoDeUsuarioBanderas
//{
//	Alumno = 1,
//	Profesor = 2,
//	Admin = 4,
//	Otro = 8,
//};

//[0000 0011] // nuestro usuario
//[0000 0110] // máscara de bits para checar si eres del tipo "Admin" o un profe
//
//[0000 0010] // AND LÓGICO que es como el &&


void FuncionPila1();

void FuncionPila2();

void FuncionPila3();


struct Rectangulo
{
	float alto;
	float ancho;
};


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


	TipoDeUsuario tipoDeUsuario = TipoDeUsuario::Alumno;
	switch (tipoDeUsuario)
	{
	case Alumno:
		cout << "switch es alumno " << endl;
		tipoDeUsuario = TipoDeUsuario::Profesor;
		break;
	case Profesor:
		cout << "switch es profe " << endl;
		break;
	case Admin:
		cout << "switch es admin " << endl;
		break;
	default:
		{
			cout << "ERROR O WARNING: switch cayó en default porque traía el valor: " << tipoDeUsuario << endl;
			// return 0; // Return es: salte de la función donde está puesto. Te lleva a la llave de cierre de la función en donde está.
		}
	}

	// Programación defensiva es hacer código que 
	// 1) Toma en cuenta los casos extremos o los poco comunes, o los nulos o los valores inválidos
	// 2) Que si falla algo, no va a fallar todo el programa
	// 3) Y que si falla, va a dejar un rastro de dónde falló
	// 4) Y que va a tratar de recuperarse lo mejor posible.

	for (int x = 0; x < 10; x++)
	{
		cout << "antes del for de Y" << endl;

		for (int y = 0; y < 10; y++)
		{
			if (y < 4)
				continue;

			cout << "antes del break dentro del for de Y, y es: " << y << endl;
			if (y == 5)
			{
				break; // te saca del scope del ciclo dentro del cual está, saltándose todo lo que esté debajo.

			} // esta es la llave de cierre del If, que el if es condicional pero no es un ciclo.
			cout << "después del break dentro del for de Y, y es: " << y << endl;
		}// esta es la llave de cierre del for (de la Y) que sí es un ciclo.

		cout << "después del for de Y" << endl;
	}

	// Operadores lógicos
	// && (operador AND) ambos tienen que ser verdad para que el resultado sea verdad
	// || (operador OR) cualquiera de los dos tienen que ser verdad para que el resultado sea verdad
	// ! (operador NOT) invierte el valor de verdad de a quien se le use
	// bool myBool = true;
	// if(myBool != true)
	// XOR es uno de los dos valores tiene que ser verdad, pero el otro no. Existe la palabra clave en c++ "xor".
	// if( (x==true && y == false) ||  
	// 	(x==false && y == true))

	// La pila de llamadas le dice al programa dónde va la ejecución, y a dónde regresar una vez que acabe 
	// con la función que esté ejecutando actualmente
	FuncionPila1();


	Rectangulo myRectangulo;
	myRectangulo.alto = 5.0f;
	myRectangulo.ancho = 3.0f;

	Rectangulo myOtherRectangulo;



	// Return es: salte de la función donde está puesto. Te lleva a la llave de cierre de la función en donde está.

	// Retorna el código de error de la ejecución del Main.
	// El código "0" significa que no hubo error alguno. Significa que el main terminó satisfactoriamente.
	return 0;
}





void FuncionPila1()
{
	cout << "función pila 1 \n";
	FuncionPila2();
}

void FuncionPila2()
{
	cout << "función pila 2 \n";
	FuncionPila3();
}

void FuncionPila3()
{
	cout << "función pila 3 \n";
}