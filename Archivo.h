#ifndef ARCHIVOS_H
#define ARCHIVOS_H

#include <ctime>
#include <fstream>
using namespace std;

class Archivo(){
	private:
		string fileName="Log.txt";

	public:

		void escribirMatrizUnaria(int** ,int, int, char, int**, int, int);
		void escribirMatrizBin(int**, int, int, int**, int, int, char, int**, int, int);

};

#endif
