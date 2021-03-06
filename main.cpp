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
	Archivo archivo=Archivo();
	int opcion;
	vector<Matriz*> Matrices;
	vector<Matriz*> Operaciones;
	do{
		switch(opcion=Menu()){
			case 1:{
				int Fila, Columna;
				cout<<"Ingrese la Fila: "<<endl;
				cin>>Fila;
				cout<<"Ingrese la Columna: "<<endl;
				cin>>Columna;
				Matriz* Mat = new Matriz(Fila, Columna);
				Mat->GenMatriz();
				Matrices.push_back(Mat);
				}
				break;
			case 2:{
				cout << "caso 2" << endl;
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO()){
						case 1:{
							int Matriz1, Matriz2;
							cout<<"Matriz 1: ";
							cin>>Matriz1;
							cout<<endl;
							cout<<"Matriz 2: ";
							cin>>Matriz2;
							Matriz* mat = *Matrices.at(Matriz1)+ *Matrices.at(Matriz2);
							archivo.escribirMatrizBin(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), Matrices.at(Matriz2)->getMatriz(), Matrices.at(Matriz2)->getFila(), Matrices.at(Matriz2)->getColumna(), '+', mat->getMatriz(), mat->getFila(), mat->getColumna());
						}
							break;
						case 2:{
							int Matriz1, Matriz2;
							cout<<"Matriz: ";
							cin>>Matriz1;
							cout<<endl;
							Matriz* mat = -*Matrices.at(Matriz1);
							archivo.escribirMatrizUnaria(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), '-', mat->getMatriz(), mat->getFila(), mat->getColumna());
						}
							break;
						case 3:{
							int Matriz1, Matriz2;
							cout<<"Matriz 1: ";
							cin>>Matriz1;
							cout<<endl;
							cout<<"Matriz 2: ";
							cin>>Matriz2;
							Matriz* mat = *Matrices.at(Matriz1)- *Matrices.at(Matriz2);
							archivo.escribirMatrizBin(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), Matrices.at(Matriz2)->getMatriz(), Matrices.at(Matriz2)->getFila(), Matrices.at(Matriz2)->getColumna(), '-', mat->getMatriz(), mat->getFila(), mat->getColumna());
						}
							break;
						case 4:{
							int Matriz1, Matriz2;
							cout<<"Matriz 1: ";
							cin>>Matriz1;
							cout<<endl;
							cout<<"Matriz 2: ";
							cin>>Matriz2;
							Matriz* mat = *Matrices.at(Matriz1) * *Matrices.at(Matriz2);
							archivo.escribirMatrizBin(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), Matrices.at(Matriz2)->getMatriz(), Matrices.at(Matriz2)->getFila(), Matrices.at(Matriz2)->getColumna(), '*', mat->getMatriz(), mat->getFila(), mat->getColumna());
						}
						case 5:{
							/*
							int Matriz1, Matriz2;
							cout<<"Matriz: ";
							cin>>Matriz1;
							cout<<endl;
							Matriz* mat = / *Matrices.at(Matriz1);
							archivo.escribirMatrizUnaria(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), '(', mat->getMatriz(), mat->getFila(), mat->getColumna());
								*/
						}
							break;
						case 6:{
							int Matriz1, Matriz2;
							cout<<"Matriz 1: ";
							cin>>Matriz1;
							cout<<endl;
							cout<<"Matriz 2: ";
							cin>>Matriz2;
							bool igual = *Matrices.at(Matriz1) == *Matrices.at(Matriz2);
							cout <<igual;
							Matriz* mat= Matrices.at(Matriz1);
							archivo.escribirMatrizBin(Matrices.at(Matriz1)->getMatriz(), Matrices.at(Matriz1)->getFila(), Matrices.at(Matriz1)->getColumna(), Matrices.at(Matriz2)->getMatriz(), Matrices.at(Matriz2)->getFila(), Matrices.at(Matriz2)->getColumna(), '=', mat->getMatriz(), mat->getFila(), mat->getColumna());
						}
							break;
						case 8:{
							
						}
							break;
						default:
							cout<<"Valor ingresado incorrecto o selecciono inversa"<<endl;
							break;

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

 
}//MenuO()
