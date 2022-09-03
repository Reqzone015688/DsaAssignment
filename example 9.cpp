/*9. Write a function replatind(array,position,element) to replace an element into an
array at the specified index (position).*/
#include<iostream>
using namespace std;
void replatind(int array[],int array_size,int position,int element){
		for(int i=0;i<array_size;i++){
		if(i==position){
			array[i]=element;
		}
	}
	cout<<"\nAfter:\n";
		for(int i=0;i<array_size;i++){
		cout<<array[i]<<" ";
	}
	
	
}
int main(){
	int array_size;
	cout<<"Enter the size of array:";
	cin>>array_size;
	int array[array_size];
	cout<<"Enter the values of array:";
	for(int i=0;i<array_size;i++){
		cin>>array[i];
	}
	int position;
	cout<<"Enter the position which you replaced by the element:";
	cin>>position;
	int element;
	cout<<"Enter the element value which you want replace:";
	cin>>element;
	cout<<"Before"<<endl;
		for(int i=0;i<array_size;i++){
		cout<<array[i]<<" ";
	}
	replatind(array, array_size, position, element);
	
	return 0;
}
