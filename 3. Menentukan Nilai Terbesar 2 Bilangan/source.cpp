#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	cout << "Program menentukan bilangan terbesar antara dua bilangan" << endl;
	cout << "\nMasukkan bilangan pertama: ";
	cin >> a;
	cout << "\nKemudian masukkan bilangan kedua: ";
	cin >> b;
	
	if(a>b){
		cout << "\nmaka bilangan terbesarnya adalah = " << a << endl;
	}else if(a<b){
		cout << "\nmaka bilangan terbesarnya adalah = " << b << endl;
	}else{
		cout << "\nmaka kedua bilangan ini sama besar" << endl;
	}
	
	
	system("pause");
}
