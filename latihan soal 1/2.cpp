#include <iostream>

using namespace std;

int kurang(int a, int b){
	return a - b;
}

int main(){
	int a,b;
	cin >> a >> b;
	cout << "Hasil pengurangan: " << kurang(a,b) << endl;
}