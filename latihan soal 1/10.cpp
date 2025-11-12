#include <iostream>

using namespace std;

float luasLingkaran(float r){
	return 3.14 * r * r;
}

int main(){
	int r;
	cin >> r;
	cout << "Hasil dari luas lingkaran dengan jari-jari " << r << " adalah " << luasLingkaran(r) << endl;
	return 0;
}