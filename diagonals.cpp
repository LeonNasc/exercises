/*Given a "square" array of subarrays, find the sum of values from the first value of the first array, the second value of the second array, the third value of the third array, and so on...

Example:

var exampleArray = [[1, 0, 0, 0],
                   [0, 1, 0, 0],
                   [0, 0, 1, 0],
                   [0, 0, 0, 1]]
 diagonalSum(exampleArray) // => 4 */
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nArgs,char*  pzArgs[]){
	
	int rows;
	int sum = 0;

	cout<<"Insira o numero de linhas/colunas"<<endl;
	cin >> rows;

	int matrix [rows][rows] ; //Todo

	for(int k=0;k<rows;k++){
		for(int j=0;j<rows;j++){
		cout << "Insira um valor" <<endl;
		cin >>	matrix[k][j];
		}
	}

	for(int i=0;i<rows;i++){

		sum += matrix[i][i];
	}

	cout << "A soma e " <<  sum<< endl;
}	
