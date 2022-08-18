/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
   
    
    return n*fact(n-1);
}

int main()
{
    int n;
    cin >> n;
    
    cout << fact(n) << endl;

    return 0;
}
