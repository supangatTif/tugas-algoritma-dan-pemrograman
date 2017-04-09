#include <iostream>
using namespace std;

int main () {
	int b = 0;
	string array [10];
	cout << "masukan elemen array : " << endl;

	for (int c = 0; c< 10; c++){
		cout << "elemen " << c++ << " = ";
		cin >> array[c];
	}

	cout << "masing masing elemen"<< endl;
	//perulangan
	for (int c = 0; c<10; c++){
		//scan elemen A
		if (array[c] == "A"){
			b++;
		}
		cout << "elemen " << c+1 << " = " << array[c] << endl;
	}

	    cout << "jumlah kemunculan elemen A = " << b;
	    return 0;
	}
