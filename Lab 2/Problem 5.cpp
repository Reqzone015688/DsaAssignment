/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void insatbeg(int array[], int element, int size){
    int a[size];
    
    a[0] = element;
     
    for(int i = 1, j = 0; i < size-1, j < size; i++, j++){
        a[i] = array[j];
        
    }
    
    for(int i = 0; i < size; i++){
        array[i] = a[i];
    }
}

int main()
{
    int n;
    cin >> n;
    
    int a[n+1];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int element;
    cin >> element;
    
    insatbeg(a, element,n+1);
    
    for(int i = 0; i < n+1; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
