#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Program Membaca Tanda Bilangan" << endl;
		cout << "\nMasukkan sebuah angka:";
		cin >> x;
		if(x < 0){
			cout << "Ini merupakan bilangan negatif" << endl;
		}else if(x > 0){
			cout << "Ini merupakan bilangan positif" << endl;
		}else if(x == 0){
			cout << "Ini merupakan bilangan nol" << endl;
		}else{
			cout << "ini bukanlah sebuah angka" << endl;
		}
	
	system("pause");
}
