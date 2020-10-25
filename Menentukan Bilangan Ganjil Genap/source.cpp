#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Program Menentukan Bilangan Ganjil Atau Genap" << endl;
	cout << "Masukkan sebuah bilangan = ";
	cin >> x;
	
	if(x%2==0){
		cout << "Bilangan ini adalah bilangan Genap\n" << endl;	
	}else{
		cout << "Bilangan ini adalah bilangan Ganjil\n" << endl;
	}
	
	
	system("pause");
}
