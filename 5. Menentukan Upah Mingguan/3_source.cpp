#include <iostream>
using namespace std;

int main(){
	float x;
	float hasil;
	cout << "Program Menentukan Upah Mingguan" << endl;
	cout << "Masukkan jumlah jam kerja seseorang dalam satu minggu:";
	cin >> x;
	
	if(x<=48){
		hasil = x * 2000;
	}else{
		hasil = (48*2000)+(x-48)*3000;
	}
	
	cout << "maka upah mingguan orang tersebut adalah Rp" << hasil << endl;
	
	system("pause");
}
