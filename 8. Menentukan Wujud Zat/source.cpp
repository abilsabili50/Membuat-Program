#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Program Menentukan Wujud Suatu Zat" << endl;
	cout << "masukkan suhu/temperatur dari zat tersebut:";
	cin >> x;
	
	if(x<0){
		cout << "Maka Zat Ini Berwujud Solid" << endl;
	}else if(x>100){
		cout << "Maka Zat Ini Berwujud Gas" << endl;
	}else{
		cout << "Maka Zat Ini berwujud Cair" << endl;
	}
	
	
	system("pause");
}
