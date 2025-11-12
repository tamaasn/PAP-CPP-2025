#include <iostream>

using namespace std;

float bagi(float a, float b){
	return a/b;
}

int main(){
	float a,b;
	cin >> a >> b;
	if (a == 0 || b == 0){
		cout << "Pembagian nol tidak diperbolehkan!" << endl;
	}
	else{
		cout << "Hasil pembagian: " << bagi(a,b) << endl;
	}
	return 0;
}