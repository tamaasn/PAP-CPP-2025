#include <iostream>

using namespace std;

int volume_kubus(int sisi){
	return sisi * sisi * sisi;
}

int main(){
	int sisi;
	cout << "Sisi: ";
	cin >> sisi;
	cout << "Volume sisi: " << volume_kubus(sisi) << endl;
	return 0;
}