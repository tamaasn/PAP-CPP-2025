#include <iostream>

using namespace std;

bool isGenap(int x){
	return x % 2 == 0;
}

int main(){
	int angka;
	cin >> angka;
	
	if (isGenap(angka) == true){
		cout << angka << " merupakan genap" << endl;
	}
	else{
		cout << angka << " merupakan ganjil" << endl;
	}
	return 0;
}