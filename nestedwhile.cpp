#include <iostream>
using namespace std;

//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
  //Kamus
  int x = 0;

  cout << "True = 1 dan False = 0" << endl;

   //Menentukan True dan False untuk Diskrit menggunakan While
   while(x < 2)
   {
       int y = 0;
       while(y < 2)
       { 
           int z = 0;
           while(z < 2)
           {
              int a = 0;
              while(a < 2)
                { cout << "x = " << x << ", y = " << y << ", z = " << x << " dan a = " << a << endl;
                a++;
              }
              z++;
           }
           y++;
       }
       x++;       
   }

  //Perintah mengakhiri program
  return 0;
}