package taller;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

/**TALLER 3 - Estructura de Datos- punto 2
 *@author JhonVe7
 * @date 25-11-2017
 * @version 3
 */

public class segundo {
	//llena la matriz con numeros aleatorios de 0 a 9
	public static void llenar(int [][] matrix, int minRandom, int maxRandom){
		minRandom = 0;
		maxRandom = 20;
		System.out.println("la matriz es : \n");
		
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				matrix[i][j] = minRandom - ((int) Math.round((Math.random()) * (minRandom - maxRandom)));
		    }
		}
	}
	// imprime la matriz llena		
	public static void imprimir(int [][] matrix){
		
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++){
				System.out.print("[" + matrix[i][j] + "]");
		    }
			System.out.println("");
		}
	}
	// recorre la matriz en espiral e imprime los numeros en fila
	public static void espiral(int [][] matrix){
		
		int m = matrix.length;
		int inicio = 0;
		int limite = matrix.length - 1;
		int count = 1;
		int number1;
		
		System.out.println("los numeros del recorrido en espiral son: ");
		
		while(count <= m * m){
			for (int i = inicio; i <= limite; i++) {
				number1 = matrix[inicio][i];
				System.out.print("["+number1+"]");
				count++;
			}

			for (int i = inicio+1; i <= limite; i++){
				
				number1 = matrix[i][limite];
				System.out.print("["+number1+"]");
				count++;
			}
				
			for (int i = limite-1; i >= inicio; i--){
				number1 = matrix[limite][i];
				System.out.print("["+number1+"]");
				count++;
			}
			
			for (int i = limite-1; i >= inicio+1; i--){
				number1 = matrix[i][inicio];
				System.out.print("["+number1+"]");
				count++;
			}
		inicio +=1;
		limite -=1;
		}
	}

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out));
				
		bw.write("Escriba el tamaño de la Matriz: ");
		bw.flush();
				
		int m = Integer.parseInt(br.readLine());
				
		int [][] matrix = new int [m][m];
		llenar(matrix, m, m);
		imprimir(matrix);
		System.out.println("");
		espiral(matrix);
	}
}

