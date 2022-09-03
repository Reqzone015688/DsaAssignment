/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void delatind(int array[], int position, int size){
    int a[size-1], p = 0;
    for(int i = 0; i < size; i++){
        if(array[i] != array[position] ){
            a[p] = array[i];
            cout << a[p] << " ";
            p++;
        }
    }
    }
}


int main()
{
    
    int n;
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int index ;
    cin >> index;
    delatind(a, index, n);

    return 0;
}
