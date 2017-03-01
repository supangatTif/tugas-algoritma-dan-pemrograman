#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	int c = 1, d = 1;

	 //Melakukan Perulangan Di dalam Perulangan
	do {
		do {
			cout << "c = 1" << c << ", d = 1" << d << endl;
			d++;
		}
		while (d < 3);
		c++;
	} 
	while(c < 5);
	

	/* Kenapa hasilnya nanti menjadi
	c = 11, d = 11
	c = 11, d = 12
	c = 12, d = 13
	c = 13, d = 14
	c = 14, d = 15

	(************************)
	kenapa c = 11 keluar 2x?
	karena saat perulangan "d" terjadi variabel "c" masih keadaan 1
	dan perulangan d di ulang 2 kali, lalu kenapa "d" bisa sampai 5?
	karena saat perulangan "d" berlangsung	"d" sudah terisi sampai 2
	maka saat "c" melakukan perulangan samapai 2x "d" akan terisi lagi
	karena "d++" masih berlangsung tapi tidak meyebabkan "c = 1" menjadi 3x
	karena "d" sudah lebih dari 3 */

	//Perintah mengakhiri program
	return 0;
}