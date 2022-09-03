#include <iostream>
using namespace std;
#include "Array2d.cpp"

int main(){
	int rows;
	int cols;
	cin >> rows;
	cin >> cols;
	
	int **transposedarray = new int*[cols];
	for(int i = 0; i < cols; i++){
		transposedarray[i] = new int[rows];
	}

	Array2d Matrix(rows, cols);
	
	cout << Matrix.numCols() << endl;
	cout << Matrix.numRows() << endl;
	
	Matrix.setitem(2, 0 , 1);
	
	Matrix.print();
	cout << endl;
	
	Matrix.scalBy(3);
	Matrix.print();
	cout << endl;
	
	Matrix.transpose(transposedarray);
	for(int i = 0 ; i < cols; i++){
		for(int j = 0; j < rows; j++){
			cout << transposedarray[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	int **rhsMatrix = new int*[cols];
	for(int i = 0; i < cols; i++){
	    rhsMatrix[i] = new int[rows];
	}
	
	for(int i = 0 ; i < cols; i++){
		for(int j = 0; j < rows; j++){
			rhsMatrix[i][j] = 1;
		}
	}
	for(int i = 0 ; i < cols; i++){
		for(int j = 0; j < rows; j++){
			cout << rhsMatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;	
	
	Matrix.add(rhsMatrix);
	
	for(int i = 0 ; i < cols; i++){
		for(int j = 0; j < rows; j++){
			cout << rhsMatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	Matrix.subtract(rhsMatrix);
	for(int i = 0 ; i < cols; i++){
		for(int j = 0; j < rows; j++){
			cout << rhsMatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	Matrix.multiply(rhsMatrix);
	
	
}