#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>


class Matriz {
	private:
		int Fila;
		int Columna;
		int** Matrix;
	public:
		Matriz();
		Matriz(int, int);
		void setFila(int);
		int getFila();
		void setColumna(int);
		int getColumna();
		int** GenMatriz(int**, int, int);
		~Matriz();
		//Operadores
		Matriz operator +(Matriz&, Matriz&);
		Matriz operator -(Matriz&);
		Matriz operator -(Matriz&, Matriz&);
		Matriz operator *(Matriz&, Matriz&);
		Matriz operator ()(Matriz&);
		bool operator ==(Matriz&, Matriz&);
		Matriz operator --(Matriz&);
};

#endif
