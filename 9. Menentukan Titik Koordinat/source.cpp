#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	cout << "Program Menentukan Kuadran Dari Suatu Titik Koordinat" << endl;
	cout << "\n\nMasukkan absis atau nilai dari titik X = ";
	cin >> x;
	cout << "\n\nMasukkan ordinat atau nilai dari titik Y = ";
	cin >> y;
	
	if(x>0 && y>0){
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Titik Koordinat Ini Berada Pada Kuadran I\n\n" << endl;
	}else if(x<0 && y>0){
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Titik Koordinat Ini Berada Pada Kuadran II\n\n" << endl;
	}else if(x<0 && y<0){
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Titik Koordinat Ini Berada Pada Kuadran III\n\n" << endl;
	}else if(x>0 && y<0){
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Titik Koordinat Ini Berada Pada Kuadran IV\n\n" << endl;
	}else if(x==0 && y==0){
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Ini Merupakan Titik Pusat Sebuah Bidang Cartesius\n\n" << endl;
	}else{
		cout << "\n\n(" << x << "," << y << ")" << endl;
		cout << "Nilai Yang Anda Masukkan Salah\n\n" << endl;
	}
	
	
	system("pause");
}
