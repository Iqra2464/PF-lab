#include<iostream>
using namespace std;

int main (){
	cout<< "start of program."<<endl;
	jump:
	cout<< "jumped to this line!"<<endl;
	
	goto jump; // jump to the label 'jump'
	
	cout<< "this line is skipped."<<endl;
	

	return 0;
}

