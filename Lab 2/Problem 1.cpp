#include<iostream>
using namespace std;



int srch(int array[], int element){
    
    if(array[0] == element){
        return 0;
    }
    
    if(array[0] == -10){
        return -1;
    }
    if(srch(array+1, element) == -1){
        return -1;
    }
    else{
        return 1+srch(array+1, element);
    }
    
    
    
    
    
}

int main(){
    int n;
    cin >> n;

    int a[n+1];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    a[n+1] = -10;
    
    int x;
    cin >> x;

    cout << srch(a, x) << endl;

    return 0;
}