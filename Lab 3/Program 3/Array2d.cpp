#include <iostream>
using namespace std;
class Array2d{
	private:
	int rows;
	int cols;
	int ** arr;
	int ** tarr;
	int **p;
	int **a;
	int array[9]={0};
	int temp;
	
	public:
		Array2d(int const &row, int const &col){
			this->rows = row;
			this->cols = col;
		    this->arr = new int *[rows];
			this->tarr = new int *[cols];

			p = new int*[cols];
		for(int i = 0; i < cols; i++){
		        p[i] = new int[rows];
	}
	        a = new int*[rows];
		for(int i = 0; i < rows; i++){
		        a[i] = new int[rows];
	}
	
		    // int *[] type ni rows bani 
			for(int i = 0; i < rows; i++){
				arr[i] = new int[cols];
			}
			
			// creation done
			
			for(int i = 0; i < rows; i++){
				for(int j = 0; j < cols; j++){
				    arr[i][j] = 0;
				}
			}
			
			for(int i = 0; i < rows; i++){
				for(int j = 0; j < cols; j++){
				    a[i][j] = 1;
				}
			}
			
			for(int i = 0; i < cols; i++){
				tarr[i] = new int[rows];
			}
		}
		
		void print (){
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				cout <<arr[i][j] << " ";
					
			}
			cout << endl;
		}}
		
		//	Returns the number of columns in the 2-D array.
	int numCols(){
		return this->cols;
	}	
	
	//	Returns the number of rows in the 2-D array.
	int numRows(){
		return this->rows;
	}	
		
		
			void clear(int const &value){
		for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				this -> arr[i][j] = value;
			   }
			}
	}
	
	
		
	void setitem(int const &i1, int const &i2, int const &scalar) {
		if(i1<rows && i2<rows){
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				if(i == i1 && j == i2){
    					arr[i][j] = scalar;
    					
					}
			}
		}
		}
		else{
			cout << "Indexies doesn't exists" << endl;
			return ;
		}
	}
	
	void scalBy(int const &scalar){
			for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				arr[i][j] = arr[i][j] * scalar;
			}
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
	
	

		
	void clear(int &value){
		for(int i = 0; i < rows; i++){
    			for(int j = 0; j < cols; j++){
    				this -> arr[i][j] = value;
			   }
			}
	}
	
	
	
	void transpose(int **array){
		for(int i = 0; i < cols; i ++){
			for(int j = 0; j < rows; j++){
		        array[i][j] =  arr[j][i] ;
		        p[i][j] = array[i][j];
			}
		}
	}
	
	
	void add(int  **newmatrix){
		for(int i = 0; i < cols; i ++){
			for(int j = 0; j < rows; j++){
				newmatrix[i][j] +=  p[i][j];
			}
		}
	}

	void subtract(int  **newmatrix){
		for(int i = 0; i < cols; i ++){
			for(int j = 0; j < rows; j++){
				newmatrix[i][j] -=  p[i][j];
			}
		}
	}	
	int k = 0, u = 0;
	void multiply(int  **newmatrix){
		for(int i = 0; i < cols; i ++){
			for(int j = 0; j < rows; j++){
				for(int o = 0; o < rows; o++){
					array[i] += newmatrix[i][j]*arr[j][i];
				}
				cout << array[i] << " ";
			}
			cout << endl;
		}
	}
	
	
	
	
	
};