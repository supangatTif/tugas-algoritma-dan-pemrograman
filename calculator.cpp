#include <iostream>
using namespace  std;


 class calculator {

//data
 	int x;
 	int y;

 	//operasi
 	int tambah () {
 		return 1;
 	}
 	int kurang () {
 		return 1;
 	} 
 	int kali (int x, int y){
 		return x * y;
    }
    int bagi (int x, int y){
    	return x / y;
    }
}

 int main () {
 	calculator casio;

 	cout << "Masukkan nilai x : ";
 	cin >> casio.x;
 	cout << endl;

 	cout << "Masukan nilai y : ";
 	cin >> casio.y;


 	cout<< "Hasil Tambah adalah " << casio.tambah(casio.x, casio.y) << endl;
 	cout<< "Hasil kurang adalah" << casio.kurang(casio.x, casio.y) endl;
 	cout<< ""


 	return 0;
 }