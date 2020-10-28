#include <iostream>
using namespace std;

int main(){
	int terbesar;
	int a;
	int b;
	int c;
	cout << "Program menentukan bilangan terbesar antara 3 bilangan" << endl;
	cout << "\nMasukkan bilangan pertama: ";
	cin >> a;
	cout << "Masukkan bilangan kedua: ";
	cin >> b;
	cout << "Masukkan bilangan ketiga: ";
	cin >> c;
	
	terbesar = a;
	if(b>terbesar){
		terbesar = b;
	}
	if(c>terbesar){
		terbesar = c;
	}
	
	cout << "maka bilangan terbesar adalah = " << terbesar << endl;
	
	system("pause");
}
