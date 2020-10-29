#include <iostream>
using namespace std;

int main(){
	float x;
	char huruf;
	cout << "PROGRAM MENENTUKAN GAJI MINGGUAN KARYAWAN" << endl;
	cout << "Masukkan golongan kerja:";
	cin >> huruf;
	
	if(huruf == 'a'){
		cout << "Masukkan jumlah jam kerja karyawan dalam satu minggu:";
		cin >> x;
		
		if(x<=48){
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << x*4000 << endl;
		}else{
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << (x-48)*3000 + 48*4000 << endl;
		}
	}else if(huruf == 'b'){
		cout << "Masukkan jumlah jam kerja karyawan dalam satu minggu:";
		cin >> x;
		
		if(x<=48){
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << x*5000 << endl;
		}else{
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << (x-48)*3000 + 48*5000 << endl;
		}
	}else if(huruf == 'c'){
		cout << "Masukkan jumlah jam kerja karyawan dalam satu minggu:";
		cin >> x;
		
		if(x<=48){
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << x*6000 << endl;
		}else{
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << (x-48)*3000 + 48*6000 << endl;
		}
	}else if(huruf == 'd'){
		cout << "Masukkan jumlah jam kerja karyawan dalam satu minggu:";
		cin >> x;
		
		if(x<=48){
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << x*7500 << endl;
		}else{
			cout << "Maka gaji mingguan karyawan tersebut adalah Rp" << (x-48)*3000 + 48*7500 << endl;
		}
	}else{
		cout << "Golongan yang anda masukkan salah" << endl;
	}
	cout << "Selesai" << endl;
	
	system("pause");
}
