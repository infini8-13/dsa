#include<iostream>
using namespace std;

void printArray(int arr[]){//or void printArray(int *arr) [points only to address of arr]
	
	int n = sizeof(arr)/sizeof(int);
	cout<<"In function "<<n<<endl;
}

int main(){
	
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	cout<<"In Main "<<n<<endl;
	printArray(arr);
}
