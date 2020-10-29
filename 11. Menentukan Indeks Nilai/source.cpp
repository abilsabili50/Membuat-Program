#include <iostream>
using namespace std;

int main(){
	float x;
	cout << "PROGRAM MENENTUKAN INDEKS NILAI" << endl;
	cout << "Keterangan Nilai" << endl;
	cout << " _______________" << endl;
	cout << "|80  <= A <= 100|" << endl;
	cout << "|70  <= B <   80|" << endl;
	cout << "|55  <= C <   70|" << endl;
	cout << "|40  <= D <   55|" << endl;
	cout << "|0   <= E <   40|" << endl;
	cout << "\n" << endl;
	cout << "Masukkan nilai anda =";
	cin >> x;
	if(0<=x && x<40){
		cout << "Indeks nilai anda adalah E" << endl;
	}else if(40<=x && x<55){
		cout << "Indeks nilai anda adalah D" << endl;
	}else if(55<=x && x<70){
		cout << "Indeks nilai anda adalah C" << endl;
	}else if(70<=x && x<80){
		cout << "Indeks nilai anda adalah B" << endl;
	}else if(80<=x && x<=100){
		cout << "Indeks nilai anda adalah A" << endl;
	}else{
		cout << "Nilai yang anda masukkan tidak sesuai keterangan" << endl;
	}
	system("pause");
}
