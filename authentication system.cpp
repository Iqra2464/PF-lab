#include<iostream>
#include<string>
using namespace std;

int main(){
	int password=123;
	int inp;
	int num=3
	loop:
		
		if (num<=3&&num>0){
			cout<<"you have"<< num << "attempt left"<<endl;
			cin>> inp;
			if(inp==password){
				cout<<"access granted!"<<endl;
				num--;
				return 0;
			}
			
		}else{
			num--;
			goto loop;
		}else{
			goto end;
		}
		end:
			cout<<"access deneid! ";
		return 0;
}

