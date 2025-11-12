#include <iostream>

using namespace std;

int kali(int a, int b){
	return a*b;
}

int main(){
	int a,b;
	cin >> a >> b;
	
	cout << "Hasil perkalian: " << kali(a,b) << endl;
}