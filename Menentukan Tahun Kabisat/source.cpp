#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Program Menentukan Tahun Kabisat" << endl;
	cout << "\nInput angka tahun:";
	cin >> x;
	
	if(x%4==0 && x%100!=0){
		cout << "Tahun ini merupakan tahun kabisat" << endl;
	}else if(x%400==0){
		cout << "Tahun ini merupakan tahun kabisat" << endl;
	}else{
		cout << "Tahun ini BUKAN merupakan tahun kabisat" << endl;
	}
	
	
	system("pause");
}
