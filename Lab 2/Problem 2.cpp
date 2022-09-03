/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insatid(int array[], int position, int element, int size){
    int a[size];
    for(int i=0;i<size;i++){
        if(i<position-1){
            a[i]=array[i];
        }else if(i==position-1){
            a[i]=element;
        }else{
            a[i]=array[i-1];
        }
    }
    for(int i=0;i<size;i++){
        array[i]=a[i];
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
    
    int position;
    cin >> position;
    
    int element;
    cin >> element;
    insatid(a, position, element,n+1);
   
   for(int i = 0; i <= n; i++){
       cout << a[i] <<" ";
    }
    return 0;
}
