#include <iostream>
using namespace std;

   // I.S program menunggu memasukan angka
   // F.S program menampilkan angka yang sudah diproses

int main (){

  // memasukan Data
	int mahasiswa =0, lulus =0, tidak =0 ;
    // mahasiswa   = jumlah mahasiswa
    // Lulus       = Jumlah mahasiswa lulus
	// Tidak lulus = jumlah mahasiswa tidak lulus

float ip, total =0, rata;
cout << "masukan nilai ip : ";
cin >> ip;

    while (ip > -999) {
    	if (ip >= 0 && ip <= 4) { mahasiswa++;
    		total = total + ip;

    	if (ip >=2,75) { lulus++;
    	}
    	else { tidak++;
    	}

    }
    cout << "masukan nilai ip : ";
    cin >> ip;

    }

  // untuk mengeluarkan/memanggil data
       cout << endl;
       cout << "jumlah mahasiswa = " << mahasiswa <<endl;
       cout << "jumlah mahasiswa lulus = " << lulus << endl;
       cout << "jumlah mahasiswa tidak lulus / belum berhasil = " << tidak << endl;
       rata = total / mahasiswa;
       cout << "rata - rata ip = " << rata;

	return 0;
}