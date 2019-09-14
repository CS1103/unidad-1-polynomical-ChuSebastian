//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H
#include <vector>
using namespace std;

class Polynomial {

private:
	//Necesitamos el coeficiente y el exponente
	int coeficiente, exponente;

	//Necesitamos un vector donde almacenar los coeficientes y las variables

public:
	//Crear un método que tome como parámetro el vector y lo inicialice.
	//En el mismo método, encontrar la forma que imprima el vector utilizando '+'
	//Distinguir los coeficientes y los exponentes dentro del vector
	void add();


	//Crear un método que permita almacenar otro polinomio
	void copy();

	//Crear un método que detecte el grado del polinomio
	void degree();



/*
	//Sumar polinomios
	//Sobrecargar el operador '+' y '+='
	void sumar();

	//Sumar polinomios con una constante
	//Sobrecargar el operador '+' y '+='
	void sumar();

	//Multiplicación de polinomios
	
*/

};

#endif //POLINOMIO_POLINOMIO_H
