#include<iostream>
using namespace std;

int checkEvenOdd(int num){
	if (num % 2==0)
	return 1; // return 1 if even
	else
	return 0; // return 0 if odd
}

int main(){
	int num = 6;
	if(checkEvenOdd(num))
	cout<< num << "is even."<<endl;
	else
	cout<< num << "is odd."<<endl;
	return 0;
}
