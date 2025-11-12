#include <iostream>

using namespace std;

int hasil_pangkat(int angka, int pangkat){
	int hasil=1;
	for(int i=0;i<pangkat;i++){
		hasil *= angka;
	}
	return hasil;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Hasil dari " << a << " pangkat " << b << " adalah " << hasil_pangkat(a,b) << endl;
	return 0;
}