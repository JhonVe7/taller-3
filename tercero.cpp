#include<iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
/*
*
*TALLER 3 - Data Estructure - N° 3
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
// main and declaration of variables
int main(int argc, char* argv[]){
int m = 0 ;
int npar = 0 ;
int nimpar = 0;
int npos = 0;
int nneg = 0 ;
string cpar, cimpar, cpos, cneg, x;
// input and definition of the matrix
cout << "\n\ningrese las dimenciones de la Matriz: ";
cin >> m ;
int matriz [m][m];

// fill matrix with random numbers between -100 and 100
cout <<"\nlos numeros aleatorios son: \n\n";
	for (int i= 0 ;i<m ;i++){
		for (int j= 0 ;j<m ;j++){
			matriz[i][j] = rand()% 200 - 100;
		}
	}
// Print the matrix
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + "[" + NumberToString(matriz[i][j])+ "]";
		}
		cout << x + "\n";	
	}
		
// define the counters and subsets of the matrix
	for(int i = 0;i<m;i++){
		for(int j = 0; j<m;j++){
			if(matriz[i][j]%2 == 0){
				// counter and list of even numbers
				npar++;
				cpar = cpar + NumberToString(matriz[i][j]) + ",";
			}
			else if (matriz[i][j]%2 != 0){
				// counter and list of odd numbers
				nimpar ++ ;
				cimpar = cimpar+ NumberToString(matriz[i][j]) + ",";	
			}
			if(matriz[i][j]< 0 ){
				//counter and list of negative numbers (-)
				nneg ++;
				cneg = cneg + NumberToString(matriz[i][j]) + ",";
			}
			else if(matriz[i][j]>= 0){
				//counter and list of positive numbers (+)
				npos++;
				cpos = cpos + NumberToString(matriz[i][j]) + ",";			
			}
		}
	}
	
	//imprime los contadores y las listas de los subconjuntos 
	
	cout <<"\n\nla cantidad de numeros pares encontrados son: " + NumberToString(npar )+ "\n\n";
	cout <<"la cantidad de numeros impares encontrados son: " + NumberToString(nimpar) + "\n\n";
	cout <<"la cantidad de numeros negativos encontrados son: " + NumberToString(nneg) + "\n\n";
	cout <<"la cantidad de numeros positivos encontrados son: " + NumberToString(npos) + "\n\n";
	cout <<"los numeros pares encontrados son: "+ cpar + "\n\n";
	cout <<"los numeros impares encontrados son:" + cimpar + "\n\n";
	cout <<"los numeros negativos encontrados son:" + cneg + "\n\n";
	cout <<"los numeros positivos encontrados son:" + cpos + "\n\n";
	
}




