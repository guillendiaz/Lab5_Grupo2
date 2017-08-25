#include "Matriz.h"
#include <iostream>
#include <vector>
using namespace std;

int Menu();
//Se ingresa al Menu()
int MenuO();
//Se
int main(){
	int opcion;
	vector<Matriz> Matrices;
	vector<Matriz> Operaciones;
	do{
		switch(opcion=Menu()){
			case 1:
				int Fila, Columna;
				cout<<"Ingrese la Fila: "<<endl;
				cin>>Fila;
				cout<<"Ingrese la Columna: "<<endl;
				cin>>Columna;
				Matriz Matrix =  Matriz(Fila, Columna);
				Matrix = GenMatriz(Matrix, Fila, Columna);
				Matrices.push_back(Matrix);
				break;
			case 2:
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO();){
						
					}//switch()2
				}while(OpcionOperador != );
				break;
		}//switch()
	}while(opcion!=3);
	return 0;
}//main()

int Menu(){
	int opcion = 0;

	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Ingresar Matriz"<<endl
			<<"2. Operaciones"<<endl
			<<"3. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 3){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()
