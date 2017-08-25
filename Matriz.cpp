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
	}//for()
	this->Fila=Fila;
	this->Columna=Columna;
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

void Matriz::GenMatriz(){
	cout << Fila << endl;
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			int Valor;
			cin>>Valor;
			Matrix[i][j] = Valor;
		}//for()2
	}//for()
}//GenMatriz()

Matriz* Matriz::operator +(Matriz& rvalue){
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

		return new Matriz(salida, Fila, Columna);

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

		return new Matriz(salida, Fila, Columna);

	}
}

Matriz* Matriz::operator *(Matriz& rvalue){
	if (Columna == rvalue.getFila()) {
		
		int ** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[rvalue.getColumna()];
		}

		for (int i= 0; i < Fila ; i++) {
			for (int j= 0; j < rvalue.getColumna() ; j++) {
				int sumatoria=0;
				for (int k= 0; k < Columna ; k++) {
					sumatoria+=(Matrix[i][k]*rvalue.getMatriz()[k][j]);
				}
				salida[i][j]= sumatoria;
			}
		}

		return new Matriz(salida, Fila, rvalue.getColumna());


	}else {

		int ** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[Columna];
		}
		
		for(int i=0; i<Fila; i++){
			for(int j=0; j<Columna; j++){
				salida[i][j] = 0;
			}
		}

		cout<<endl<<"Las matrizes no el mismo numero entre fila-columna. "<<endl;

		return new Matriz(salida, Fila, Columna);


	}
}

Matriz* Matriz::operator -(Matriz& rvalue){
	if (Fila == rvalue.getFila() && Columna == rvalue.getColumna()) {

		int ** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[Columna];
		}

		for (int i= 0; i < Fila ; i++) {
			for (int j= 0; j < Columna ; j++) {
				salida[i][j]= Matrix[i][j] - rvalue.getMatriz()[i][j];
			}
		}

		return new Matriz(salida, Fila, Columna);

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

		return new Matriz(salida, Fila, Columna);

	}
}

	Matriz* Matriz::operator()(){
		int** salida = new int* [Fila];
		for(int i=0; i<Fila; i++){
			salida[i] = new int[Columna];
		}

		for(int i=0; i<Fila; i++){
			for(int j=0; j<Columna; j++){
				salida[i][j] = Matrix[j][i];
			}
		}
		return new Matriz(salida, Columna, Fila);
	}
//operator()}


Matriz::~Matriz(){
	for (int i= 0; i < Fila  ; i++) {
		delete[] Matrix[i];
		Matrix[i]=NULL;
	}

	delete[] Matrix;
}

Matriz* Matriz::operator-(){
	int** salida = new int* [Fila];
	for(int i=0; i<Fila; i++){
		salida[i] = new int[Columna];
	}
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			salida[i][j] = Matrix[i][j];
			}
		}
	for(int i=0; i<Fila; i++){
		for(int j=0; j<Columna; j++){
			if(salida[i][j] < 0){
				salida[i][j]*=-1;
			}else if(salida[i][j] >0){
				salida[i][j]*=-1;
			}
		}
	}
	return new Matriz(salida, Fila, Columna);
}

bool Matriz::operator==(Matriz& rvalue){
	if (Fila == rvalue.getFila() && Columna == rvalue.getColumna()) {
			int contador=0;
			for(int i=0; i<Fila; i++){
				for(int j=0; j<Columna; j++){
					if(Matrix[i][j] == rvalue.getMatriz()[i][j]){
						contador++;	
					}else{
						contador--;
					}
				}
			}
		if(contador == Fila*Columna){
			return true;
		}else{
			return false;
		}
	}else{

		cout<<endl<<"Las matrizes no tienen el mismo tamaño. "<<endl;
		return false;
	}
	
}


