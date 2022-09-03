#include <iostream>
using namespace std;

class Array2D{
   private :
    int rows;
    int cols;
    int ** arr;
    public :
    	Array2D(int nrows, int ncols){
    		this -> rows = nrows;
    		this -> cols = ncols;
    		this -> arr = new int*[rows];
    		
    		// int *[] type ni rows bani 
    		for(int i = 0; i < rows; i++){
    			arr[i] = new int[rows];
			}
			
			// creation done
			
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				cin >> arr[i][j];
			   }
			}
			
		}
	
//  Returns the number of rows in the 2-D array.
	int numRows(){
		return this->rows;
	}
	
//	Returns the number of columns in the 2-D array.
	int numCols(){
		return this->cols;
	}
	
	void clear(int const &value){
		for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				this -> arr[i][j] = value;
			   }
			}
	}
	
//    declare void as const because it is not changing the this->'s value so now we can also call this function through constant object
	void print() const{
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				cout << arr[i][j] << " ";
			   }
			   cout << endl;
			}
	}
	
	int getitem(int const &i1, int const &i2) const{
		if(i1<rows && i2<rows){
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				if(i == i1 && j == i2){
    					return arr[i][j];
					}
			}
		}
		}
		else{
			return -1;
		}
		
	}
	
	void setitem(int const &i1, int const &i2, int const &value){
		if(i1<rows && i2<rows){
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				if(i == i1 && j == i2){
    					arr[i][j] = value;
    					cout << arr[i][j] << endl;
					}
			}
		}
		}
		else{
			return ;
		}
	}
	
	
};