#include<iostream>
#include <string>
#include <sstream>
/*
*
*TALLER 3 - Data Estructure - N° 4
*	@author JhonVe7
*	@date 25-11-2017
*	@version 2
*
*/
using namespace std;

// Method of conversion int a string
string NumberToString(int pNumber){
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}

int main (int argc, char* argv[]){
// input of the size and definition of the dimensions of the matrix and its transpose
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
	// Print the original matrix
	string x;
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matriz[i][j])+ "]";
		}
		cout << x + "\n";	
	}
	// Fill the transpose of the original matrix
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
		matrizB [j][i]=matriz[j][i]; // Definition of the transpose
		}
	}
	
	cout << "\n\nEspejo: \n\n";
	// Print the Transpose of the original matrix
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matrizB[j][i])+ "]";
		}
		cout << x + "\n";	
	}
}
