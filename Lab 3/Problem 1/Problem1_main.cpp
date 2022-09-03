#include <iostream>
using namespace std;
#include "Array2D.cpp"

int main(){
	
	int row, col;
	cin >> row >> col;
	
	
	Array2D Matrix(row, col);
	Matrix.print();
	
	
	cout <<"Total Numbers of rows available in the matrix : "<< Matrix.numRows() << endl;
	cout <<"Total Numbers of columns available in the matrix : "<<Matrix.numCols() << endl;
	
	
	
	Matrix.clear(10);
	Matrix.print();
	
	cout << Matrix.getitem(3, 3) << endl;
	
    Matrix.setitem(1, 1, 99) ;
	
	Matrix.print();
	
	return 0;
}