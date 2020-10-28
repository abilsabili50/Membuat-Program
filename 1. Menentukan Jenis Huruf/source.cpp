#include <iostream>
using namespace std;

int main(){
	char huruf;
	cout << "Program Menentukan Huruf" << endl;
	cout << "Masukkan huruf: ";
	cin >> huruf;
	
	if(huruf == 'a'||huruf == 'i'||huruf == 'u'||huruf == 'e'||huruf == 'o'){
		cout << "Huruf yang anda masukkan adalah huruf vokal" << endl;
	}else{
		cout << "Huruf yang anda masukkan adalah huruf konsonan" << endl;
	}
	
	system("pause");
	//cin.get();
	//return 0;
}
