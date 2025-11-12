#include <iostream>

using namespace std;

float toFarenheit(float c){
	return (c * 9/5) + 32;
}

int main(){
	int c;
	cin >> c;
	cout << c << " derajat celsius sama seperti " << toFarenheit(c) << " farenheit" << endl;
	return 0;
}