#include "Archivo.h"

Archivo::Archivo(){
	fileName="Log.txt";
}

void Archivo::escribirMatrizUnaria(int** matriz, int sizex, int sizey, char operador, int ** operada, int tamanox, int tamanoy){
	time_t fecha= time(0);
	char* sFecha = ctime(&fecha);

	ofstream writeFile(fileName.c_str(), ios::app);

	writeFile<<"========="<<sFecha<<"========="<<endl<<endl
		<<"<Matriz Operando>"<<endl<<endl;

	for (int i= 0; i < sizex ; i++) {
		for (int j= 0; j < sizey ; j++) {
			writeFile<<"["<<matriz[i][j]<<"]";
		}
		writeFile<<endl;
	}

	writeFile<<endl<<"<Operacion>"<<endl<<endl;

	writeFile<<operador<<endl<<endl
		<<"<Matriz Operada>"<<endl<<endl;


	for (int i= 0; i < tamanox ; i++) {
		for (int j= 0; j < tamanoy ; j++) {
			writeFile<<"["<<operada[i][j]<<"]";
		}
		writeFile<<endl;
	}

	writeFile<<endl<<"==========FIN=========="<<endl<<endl;

}

void Archivo::escribirMatrizBin(int** LHSO, int LHSOX, int LHSOY, int** RHSO, int RHSOX, int RHSOY, char operador, int** operada, int operadaX, int operadaY){

	time_t fecha= time(0);
	char* sFecha = ctime(&fecha);

	ofstream writeFile(fileName.c_str(), ios::app);

	writeFile<<"========="<<sFecha<<"========="<<endl<<endl
		<<"<Left Hand Side Operator>"<<endl<<endl;

	for (int i= 0; i < LHSOX ; i++) {
		for (int j= 0; j < LHSOY ; j++) {
			writeFile<<"["<<LHSO[i][j]<<"]";
		}
		writeFile<<endl;
	}

	writeFile<<endl<<"<Operacion>"<<endl<<endl;

	writeFile<<operador<<endl<<endl
		<<"<Right Hand Side Operator>"<<endl<<endl;


	for (int i= 0; i < RHSOX ; i++) {
		for (int j= 0; j < RHSOY ; j++) {
			writeFile<<"["<<RHSO[i][j]<<"]";
		}
		writeFile<<endl;
	}

	writeFile<<endl<<"="<<endl<<endl
		<<"<Matriz Operada>"<<endl<<endl;


	for (int i= 0; i < operadaX ; i++) {
		for (int j= 0; j < operadaY ; j++) {
			writeFile<<"["<<operada[i][j]<<"]";
		}
		writeFile<<endl;
	}
	writeFile<<endl<<"==========FIN=========="<<endl<<endl;
}
