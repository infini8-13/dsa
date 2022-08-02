#include <iostream>
using namespace std;

int main() {
	int n;
	int marks[100];
	cout<<"Enter the number of students ";
	cin>>n;

	//Input
	for(int i = 0; i<n; i++){
		marks[i]=i*2+1;
	}

	//Update
	for(int i = 0; i<n; i++){
		cout<<marks[i]<<" ,";
	}
	cout<<endl;
	return 0;
}
