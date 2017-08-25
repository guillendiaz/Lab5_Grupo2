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
		Matriz(int**, int, int);
		int** getMatriz();
		void setFila(int);
		int getFila();
		void setColumna(int);
		int getColumna();
		int** GenMatriz(int**, int, int);
		~Matriz();
		//Operadores
		Matriz operator +(Matriz&);
		Matriz operator -();
		Matriz operator -(Matriz&);
		Matriz operator *(Matriz&);
		Matriz operator ()();
		bool operator ==(Matriz&);
		Matriz operator --();
};

#endif
