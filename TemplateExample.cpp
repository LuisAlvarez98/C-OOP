/*
	By Luis Felipe Alvarez Sanchez
	17 April 2018
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<class T>
void muestraMatriz(T matriz, int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
}

template<class T>
void muestraCol(T matriz, int size, int col) {
	int i, j;
		for (i = 0; i < size; i++) {
			cout << matriz[i][col] << "\n";
		}
}

template<class T>
T datoMayor(T matriz[10][10] , int size) {
	int i,j;
	T max = matriz[0][0];
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (max < matriz[i][j]) {
				max = matriz[i][j];
			}
		}
	}
	return max;
}
int main()
{
	double dMatNum[10][10] = { { 2.5, 3.8, 4.7, 5.2, 6.5 },
	{ 2.2, 4.4, 6.6, 8.8, 10.1 },
	{ 1.5, 3.7, 5.9, 7.1, 9.7 },
	{ 1.5, 2.6, 3.7, 4.8, 5.8 },
	{ 1, 2, 3, 4, 5 } };

	string sMatLet[10][10] = { { "a1", "b2", "c3", "d4" },
	{ "dado", "lente", "tren", "reloj" },
	{ "gato", "iguana", "canario", "tigre" },
	{ "algo", "nada", "poco", "mucho" } };
	int iSizeMatDob = 5;  // cantidad de renglones y columnas de la matriz de números
	int iSizeMatStr = 4;  // cantidad de renglones y columnas de la matriz de strings

	int iColumna;
	double dMayor = 0;
	string sMayor;
	char cOpcion;

	do {
		//cout << "a) mostrar matriz b) mostrar columna c) mostrar mayor d) terminar " << endl;
		cin >> cOpcion;
		switch (cOpcion) {
		case 'a':
			cout << "Datos de la primera matriz:" << endl;
			// llama a la funcion que muestra los datos de la matriz
			muestraMatriz(dMatNum, iSizeMatDob);


			cout << "Datos de la segunda matriz:" << endl;
			// llama a la funcion que muestra los datos de la matriz
			muestraMatriz(sMatLet, iSizeMatStr);


			break;

		case 'b':
			//cout << endl << "Cual columna quieres mostrar ";
			cin >> iColumna;
			cout << "Columna de la primera matriz:" << endl;
			// llama a la funcion que muestra los datos de la columna de la matriz
			muestraCol(dMatNum, iSizeMatDob, iColumna);

			cout << "Columna de la segunda matriz:" << endl;
			// llama a la funcion que muestra los datos de la columna de la matriz
			muestraCol(sMatLet, iSizeMatStr, iColumna);


			break;

		case 'c':
			cout << "Dato mayor de la primera matriz:" << endl;
			// llama a la funcion que obtiene el dato mayor
			dMayor = datoMayor(dMatNum, iSizeMatDob);

			cout << dMayor << endl;

			cout << "Dato mayor de la segunda matriz:" << endl;
			// llama a la funcion que obtiene el dato mayor
			sMayor = datoMayor(sMatLet, iSizeMatStr);

			cout << sMayor << endl;
			break;
		}
	} while (cOpcion != 'd');

	return 0;
}


