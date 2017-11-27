package taller;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

/**
 * TALLER 3 - Estructura de Datos- punto 5
 *@author Jhon ve
 * @date 25-11-2017
 * @version 2
 */

public class quinto{
	
	//llena la matriz de numeros aleatorios de 0 a 9
	
	public static void llena(int [][] matrix, int minRandom, int maxRandom) {
		minRandom = 0;
		maxRandom = 9;
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				matrix[i][j] = minRandom - ((int) Math.round((Math.random()) * (minRandom - maxRandom)));
	        }
	    }
	}
		
	// imprime como se veria la matriz completa 
	
	public static void imprimenatural(int [][] matrix){
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				System.out.print("[" + matrix[i][j] + "]");
	        }
	        System.out.println("");
	    }
	}
	
	// imprime como se vería la matriz con los datos del rombo 
	public static void imprimerombo(int [][] matrix, int n){
		 if(n%2 == 0){
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i+j >= (n/2)-1 && i+(n/2) >= j && j+(n/2) >= i && i+j <= (n/2)+n-1){ //limites del rombo para una matriz par
						System.out.print("[" + matrix[i][j] + "]");
					}
					else{
						System.out.print("   ");
					}
				}
				System.out.println(" ");
			}
		 }
		 else{
			 for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						if (i+j >= (n/2) && i+(n/2) >= j && j+(n/2) >= i && i+j <= (n/2)+n-1){ //limites del rombo para una matriz impar
							System.out.print("[" + matrix[i][j] + "]");
						}
						else{
							System.out.print("   ");
						}
					}
					System.out.println(" ");
			}			 
		 }
	}

	public static void main(String[] args) throws IOException{
			
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out));
			
		bw.write("Escriba el tamaño de la Matriz: ");
		bw.flush();	
		int m = Integer.parseInt(br.readLine());	
		int [][] matrix = new int [m][m];
			
		llena(matrix, m, m);
		System.out.println("\n matriz original: \n");
		imprimenatural(matrix);
		System.out.println("\n matriz en forma de rombo: \n");
		imprimerombo(matrix , m);
			
	}
}

