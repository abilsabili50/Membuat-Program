#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Program menentukan nilai mutlak" << endl;
	cout << "Masukkan sebuah bilangan: ";
	cin >> x;
	
	if(x >= 0){
		cout << "maka nilai mutlak nya adalah = " << x << endl;
	}else{
		int hasil;
		hasil = x * -1;
		cout << "maka nilai mutlaknya adalah = " << hasil << endl;
	}
	
	system("pause");
}
