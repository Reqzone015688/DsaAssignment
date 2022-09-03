class Array2D{
	int cols;
	int ** array;
	
	public:
		Array2D(int c){ 
			this -> cols = c;
			array = new int*[3];
			
			for(int i = 0; i < 3; i++){
				array[i] = new int[cols];
			}
			
		}
	
	int p = 0, q = 0; 
	void sparse(int **matrix, int row, int col){
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				if(matrix[i][j] != 0){
					array[0][q] = i;
					array[1][q] = j;
					array[2][q] = matrix[i][j];
					q++;
				}
			}
		}
		
		for(int i = 0; i < 3; i++){
			for(int j = 0; j <cols; j++){
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
	}
};