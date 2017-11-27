#include<iostream>
#include <string>
#include <sstream>
/*
*
*TALLER 3 - Estructura de Datos- punto 4
*	@author Jhon ve
*	@date 25-11-2017
*	@version 2
*
*/
using namespace std;

// Metodo de conversion int a string 
string NumberToString(int pNumber){
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

int main (int argc, char* argv[]){
// ingreso del tamaño y definicion de las dimenciones de la matriz y su transpuesta
int m = 0 ;
cout << "ingrese las dimenciones de la Matriz: ";
cin >> m ;
int matriz [m][m];
int matrizB [m][m];
	//llena la matriz
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		cout << "ingrese el dato: ";
		cin >> matriz[i][j];
		}
	}
	cout <<"\n";
	// Imprime la matriz original
	string x;
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matriz[i][j])+ "]";
		}
		cout << x + "\n";	
	}
	//LLena la transpuesta de la matriz original
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		matrizB [j][i]=matriz[j][i]; // Definición de la transpuesta
		}
	}
	
	cout << "\n\nEspejo: \n\n";
	// Imprime la Transpuesta de la matriz original
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matrizB[j][i])+ "]";
		}
		cout << x + "\n";	
	}
}
