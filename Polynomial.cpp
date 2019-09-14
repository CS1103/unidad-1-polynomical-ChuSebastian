//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"




void Polynomial::add(int *list, int cantidad, int _coeficiente, int _exponente)
{
	cout << "Ingrese la cantidad de polinomios que desea:  ";
	cin >> cantidad;

	//Por cada polinomio se ingresan dos valores (coeficiente y grado)
	list = new int[cantidad*2];

	//Una vez creado el espacio de memoria, se debe inicializar
	for (int i = 0; i < cantidad * 2; i++) 
	{
		while (i % 2 == 0) 
		{
			cout << "Ingrese el exponente: ";
			cin >> _exponente;
		}
		cout << "Ingrese el coef: ";
		cin >> _coeficiente;
	}
}


