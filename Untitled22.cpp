#include<iostream>
using namespace std;

struct def{
	char name[30];
	int age;
};
int main(){
	def abc[100]={ {"ali",2}, {"amna",4}, {"anush",8} };
	int a=0;
	while(a<=2){
		cout<<"name"<< abc[a].name << abc[a].age << endl;
		a++;
	}
	return 0;
}
