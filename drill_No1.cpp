#include "std_lib_facilities.h"

int main(){

	int a = 1;
	int b = 1;
	
	while(a || b == '|'){
		cout <<"Enter two numbers! (do it like -> 'a b')" << endl;
		cin >> a >> b;
		cout << "Your number is: " << a << b << endl;
	}

	return 0;

}