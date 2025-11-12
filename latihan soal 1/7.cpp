#include <iostream>

using namespace std;

int maksimum(int a, int b){
	if (a > b){
		return a;
	}
	return b;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Nilai terbesar: " << maksimum(a,b) << endl;
	return 0;
}