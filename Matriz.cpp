#include "Matriz.h"
#include <iostream>
using namespace std;

Matriz::Matriz(){

}//Matriz()

Matriz::Matriz(Fila, Columna){
	Matrix = new int* [Fila][Columna];
	for(int i=0; i<Fila; i++){
		Matrix[i] = new int[Fila];
	}//for()
	
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			Matrix[i][j] = 0;
		}//for()3
	}//for()2
}//Matriz(int, int)

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

void Matriz::GenMatriz(){
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			int Valor;
			cout<<"Ingrese Valor: ";
			cin>>Valor;
			Matrix[i][j] = Valor;
		}//for()2
	}//for()
}//GenMatriz()
