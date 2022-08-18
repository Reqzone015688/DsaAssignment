#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int length(char arr[])
{
	int c = 0;
	for(int i = 0; arr[i] != '\0'; i++)
	{
		c++;
	}
	return c;
}

bool IsPali(char *arr, int size, int a)
{
	if(size == 0  || size ==1)
	{
		return true;
	}
	if(arr[a] != arr[size-1]){
		return false;
	}
	else
	{
		return IsPali(arr, size-1,a+1);
	}
	
}

int main()
{
	char arr[10000];
	cin >> arr;
	int a=0;
	//cout << arr <<endl;
	
	cout << IsPali(arr, length(arr),a) << endl; 
	
	return 0;
}