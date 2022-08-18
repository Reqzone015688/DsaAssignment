/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int fib(int x)
{
    if(x == 0)
    {
        return 0;
    }
    if(x == 1)
    {
        return 1;
    }
    
    int fib1 = fib(x-1);
    int fib2 = fib(x-2);
    
    return fib1 + fib2;
}

int main()
{
    int n;
    cin >> n;
    if(n >= 0)
    {
        cout << fib(n) << endl;
    }
    else
    {
        cout << "Enter valid number" << endl;
    }
    

    return 0;
}
