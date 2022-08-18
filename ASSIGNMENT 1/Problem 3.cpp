/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

 int addup(int n)
 {
    if(n == 0)
     {
         return 0;
     }
     return n+addup(n-1);
}

int main()
{
     float n;
     cin >> n;
     if(n - floor(n)==0)
     {
        cout << addup(n) << endl;
     }
    else{
         cout << "Wrong input" << endl;
     }
     
//    cout<<floor(4.5)<<endl;
    
    
    return 0;
}
