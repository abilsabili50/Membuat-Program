#include <iostream>
#include <string>
using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char matrix2[1][1];
string player1, player2;
bool temp = false, cek = true;

void showMatrix(){
	system("cls");
	cout << "SELAMAT DATANG DI GAME TIC TAC TOE" << endl;
	cout << player1 << " = X" << endl;
	cout << player2 << " = O" << endl;
	for(int A=0; A<3; A++){
		cout << "| ";
		for(int B=0; B<3; B++){
			cout << matrix[A][B] << " ";
		}
		cout << "|" << endl;
	}
}

void changeX(char player1){
	[&]{
		for(int A=0; A<3; A++){
			for(int B=0; B<3; B++){
				if(matrix[A][B] == 'X' || matrix[A][B] == 'O')
					cek = true;
				if(player1 == matrix[A][B]){
					matrix[A][B] = 'X';
					cek = true;
					return ;
				}
				cek = false;
			}
		}
	}();
}

void changeO(char player2){
	[&]{
		for(int A=0; A<3; A++){
			for(int B=0; B<3; B++){
				if(matrix[A][B] == 'X' || matrix[A][B] == 'O')
					cek = true;
				if(player2 == matrix[A][B]){
					matrix[A][B] = 'O';
					cek = true;
					return ;
				}
				cek = false;
			}
		}
	}();
}

void repeatInputX(char repeat){
	showMatrix();
	cout << "Angka tersebut telah diisi" << endl;
	cout << player1 << " Silahkan pilih salah satu angka lagi: "; cin >> repeat;
	changeX(repeat);
}

void repeatInputO(char repeat){
	showMatrix();
	cout << "Angka tersebut telah diisi" << endl;
	cout << player2 << " Silahkan pilih salah satu angka lagi: "; cin >> repeat;
	changeO(repeat);
}

void check(){
	for(int A=0; A<3; A++){
		if(matrix[A][0] == matrix[A][1]){ // check baris
			if(matrix[A][0] == matrix[A][2]){
				matrix2[0][0] = matrix[A][0];
				temp = true;
			}
		}
		if(matrix[0][A] == matrix[1][A]){ // check kolom
			if(matrix[0][A] == matrix[2][A]){
				matrix2[0][0] = matrix[0][A];
				temp = true;
			}
		}
	}
	
	//check diagonal
	if(matrix[0][0] == matrix[1][1]){
		if(matrix[0][0] == matrix[2][2]){
			matrix2[0][0] = matrix[0][0];
			temp = true;
		}
	}
	else if(matrix[0][2] == matrix[1][1]){
		if(matrix[0][2] == matrix[2][0]){
			matrix2[0][0] = matrix[0][2];
			temp = true;
		}
	}
}

int main(){
	char input;
	
	cout << "SELAMAT DATANG DI GAME TIC TAC TOE" << endl;
	cout << "Masukkan nama pemain 1: ";
	getline(cin, player1);
	cout << "Masukkan nama pemain 2: ";
	getline(cin, player2);
	
	showMatrix();
	
	for(int i=1; i<=9; i++){
		if(i%2==1){
			cout << player1 << " Silahkan pilih salah satu angka tersebut: ";
			cin >> input;
			changeX(input);
			while(!cek){
				repeatInputX(input);
			}
			check();
			if(temp){
				break;
			}
		}else{
			cout << player2 << " Silahkan pilih salah satu angka tersebut: ";
			cin >> input;
			changeO(input);
			while(!cek){
				repeatInputO(input);
			}
			check();
			if(temp){
				break;
			}
		}
		showMatrix();
	}
	
	showMatrix();
	
	if(matrix2[0][0] == 'X')
		cout << "Congratulation " << player1 << " You Win!" << endl;
	else if(matrix2[0][0] == 'O')
		cout << "Congratulation " << player2 << " You Win!" << endl;
	else
		cout << "Game Over Without The Winner" << endl;
	return 0;
}
