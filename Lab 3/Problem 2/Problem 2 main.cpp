#include <iostream>
using namespace std;
#include "Array2D.cpp"

int main(){
	int rows, cols;
	cin >> rows >> cols;
	int c = 0;
	int ** matrix = new int*[rows];
	for(int i = 0; i < rows; i++){
		matrix[i] = new int[cols];
	}
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cin >> matrix[i][j];
			if(matrix[i][j] != 0){
				c++;
			}
		}
	}
	cout << endl;
	Array2D object(c);
	
	object.sparse(matrix, rows, cols);
	
	return 0;
}