#include "std_lib_facilities.h"

int main(){

	double a = 1;
	double b = 1;
	
	while(a || b == '|'){
		cout <<"Enter two numbers! (do it like -> 'a b')" << endl;
		cin >> a >> b;

	if (a < b)
	{
		cout << "The smaller value is: " << a << endl;

	}else if (a > b){
		cout << "The smaller value is: " << b << endl;

	}else if (a == b){
		cout << "The numbers are equal."<< endl;

	}
	}
	return 0;

}