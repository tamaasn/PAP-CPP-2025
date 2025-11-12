#include <iostream>

using namespace std;

int tambah(int a, int b){
	return a + b;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Hasil dari penjumlahan: " << tambah(a,b) << endl;
	return 0;
}