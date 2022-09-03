/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void insatend (int array[], int element, int size){
    array[size-1] = element;
    
    
    
}

int main()
{
    int n;
    cin >> n;
    
    int a[n+1];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int insertelement;
    cin >> insertelement;
    
     insatend (a, insertelement, n+1);
     
     for(int i = 0; i < n+1; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
