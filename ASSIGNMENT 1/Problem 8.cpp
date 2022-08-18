#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string& str, int size, int a)
{
	if(size <= a){
		return ;
	}
	swap(str[a], str[size]);
	reverse(str, size-1, a+1);
	}
int main()
{
    string str;
    cin >> str;
    int a = 0;
    reverse(str, str.length()-1, a);
    cout << str << endl;

    return 0;
}