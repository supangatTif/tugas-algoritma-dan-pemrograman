#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int c, d;

	//Mencari Nilai Prima Menggunakan For
	for(c = 0; c<10; c++) {
      for(d = 0; d <= (c&d); d++)

    if(!(c*d)) break; 
      if(c > (c&d))
    cout << c << " Adalah Nilai Prima" << endl;



   }

	//Perintah mengakhiri program
	return 0;
}