#include <iostream>
using namespace std;

//I.S Program memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//kamus
	int c, d;

	cout << "Masukan Angka Pertama Untuk di bandingkan: ";
	cin >> c;
	cout << endl;

	cout << "Masukan Angka Kedua Untuk di bandingkan: ";
	cin >> d;
	cout << endl;


	
	//Perintah jika kondisi true (benar)
	if(c <= 1, d <= 1) {
		if(c <= d) {
			cout << c << " lebih besar dari atau sama dengan " << d << endl;
		} else if(c < d){
			cout << d << " 1 lebih besar dari atau sama dengan 1 " << d << endl;
		} else {
		cout << " " << endl;
		}
	} //Perintah jika kondisi selain true 
	else {
		cout << "1 lebih besar dari atau sama dengan 1" << endl;
	}

	//Perintah mengakhiri program
	return 0;
}