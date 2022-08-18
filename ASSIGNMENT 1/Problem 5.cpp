#include <iostream>
using namespace std;
int prodArray(int *x, int size)
{
	if(size == 0){
		return 1;
	}
	return x[0] * prodArray(x+1,size-1);
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
		cout <<prodArray(arr, n) << endl;
	
	
	
	return 0;
}