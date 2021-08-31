#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
using namespace std;

int main(){
	string name;
	char yn;
	int num, numrand;
	srand(time(NULL));
	
	cout << "Selamat Datang di Game Percobaan Saya" << endl;
	cout << "Siapa namamu: "; cin >> name;
	cout << "Halo " << name << " maukah kamu bermain tebak angka dengan komputer (y/n) ?"; cin >> yn;
	if(yn == 'n' || yn == 'N')
		return 0;
	
	while(true){
		numrand = rand()%5 + 1;
		cout << "coba tebak angka yang sedang dipikirkan oleh komputer antara 1 - 5: "; cin >> num;
		if(numrand == num){
			cout << "Selamat kamu menang" << endl;
			break;
		}else{
			system("cls");
			cout << "Maaf coba lagi, komputer sedang memikirkan angka " << numrand << endl;
		}
	}
	
	return 0;
}
