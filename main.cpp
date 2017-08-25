#include "Matriz.h"
#include "Archivo.h"
#include <iostream>
#include <vector>

using namespace std;

int Menu();
//Se ingresa al Menu()
int MenuO();
//Se ingresa al MenuO()
int main(){
	int opcion;
	vector<Matriz> Matrices;
	vector<Matriz> Operaciones;
	do{
		switch(opcion=Menu()){
			case 1:{
				int Fila, Columna;
				cout<<"Ingrese la Fila: "<<endl;
				cin>>Fila;
				cout<<"Ingrese la Columna: "<<endl;
				cin>>Columna;
				Matriz Mat =  Matriz(Fila, Columna);
				Mat.GenMatriz(Mat.getMatriz(), Fila, Columna);
				Matrices.push_back(Mat);}
				break;
			case 2:{
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO()){
						case 1:
							int Matriz1, Matriz2;
							cout<<"Matriz 1: ";
							cin>>Matriz1;
							cout<<endl;
							cout<<"Matriz 2: ";
							cin>>Matriz2;
							Matriz mat=Matrices.at(Matriz1)+Matrices.at(Matriz2);
								
					}//switch()2
				}while(OpcionOperador != 8);}
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

int MenuO(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Suma"<<endl
			<<"2. Menos Unario"<<endl
			<<"3. Resta"<<endl
			<<"4. Multiplicacion"<<endl
			<<"5. Transpuesta"<<endl
			<<"6. Comparacion"<<endl
			<<"7. Inversa"<<endl
			<<"8. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 8){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

	while
}//MenuO()
