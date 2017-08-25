#include "Matriz.h"
#include <iostream>
using namespace std;

Matriz::Matriz(){

}//Matriz()

Matriz::Matriz(int Fila, int Columna){
	Matrix = new int* [Fila];
	for(int i=0; i<Fila; i++){
		Matrix[i] = new int[Columna];
	}//for()
	
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			Matrix[i][j] = 0;
		}//for()3
	}//for()2
}//Matriz(int, int)

Matriz::Matriz(int** mat, int fila, int columna){
	Matrix=mat;
	Fila=fila;
	Columna=columna;
}

void Matriz::setFila(int pFila){
	this->Fila = pFila;
}//setFila(int)

int Matriz::getFila(){
	return Fila;
}//getFila()

void Matriz::setColumna(int pColumna){
	this->Columna = pColumna;
}//setColumna(int)

int Matriz::getColumna(){
	return Columna;
}//getColumna()

int** Matriz::getMatriz(){
	return Matrix;
}

int** Matriz::GenMatriz(int**, int Fila, int Columna){
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			int Valor;
			cout<<"Ingrese Valor: ";
			cin>>Valor;
			Matrix[i][j] = Valor;
		}//for()2
	}//for()
	return Matrix;
}//GenMatriz()

Matriz Matriz::operator +(Matriz& rvalue){
	if (Fila == rvalue.getFila() && Columna == rvalue.getColumna()) {

		int ** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[Columna];
		}

		for (int i= 0; i < Fila ; i++) {
			for (int j= 0; j < Columna ; j++) {
				salida[i][j]= Matrix[i][j] + rvalue.getMatriz()[i][j];
			}
		}

		return Matriz(salida, Fila, Columna);

	}else{

		int ** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[Columna];
		}
		
		for(int i=0; i<Fila; i++){
			for(int j=0; j<Columna; j++){
				salida[i][j] = 0;
			}
		}

		cout<<endl<<"Las matrizes no tienen el mismo tamaño. "<<endl;

		return Matriz(salida, Fila, Columna);

	}
}
