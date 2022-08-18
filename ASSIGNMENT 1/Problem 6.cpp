#include <iostream>
using namespace std;

int HCF(int x, int y, int z)
{
	if(z == 1)
	{
		return 1; 
	}
	if(x%z == 0 && y%z == 0)
	{
		return z;
	}
	return HCF(x, y, z-1);
}

int main()
{
	int m, n;
	cin >> m >> n;
	
	cout << HCF(m, n, m) << endl;
	
	
	
	return 0;
}