#include <iostream>
using namespace std;

// Definisi fungsi persegiPanjang
int persegiPanjang(int p, int l)
{
   // Mengembalikan nilai hasil p*l
   return p * l;
}

// Definisi fungsi lingkaran
float lingkaran(float r)
{
   // Mengembalikan nilai hasil 3.14 * r * r
   return 3.14 * r * r;
}

// Fungsi utama
int main()
{

   // Deklarasi dan inisialisasi variabel
   int panjang = 20, lebar = 7;
   float jari = 7.5;

   // Persegi panjang
   cout << "\n=== Persegi panjang ===" << endl;
   cout << "Panjang: " << panjang << endl;
   cout << "Lebar: " << lebar << endl;
   cout << "\nLuasnya adalah: " << persegiPanjang(panjang, lebar) << endl;
   cout << "---------------------------------" << endl;

   // Lingkaran
   cout << "\n=== Lingkaran ===" << endl;
   cout << "Jari-jari: " << jari << endl;
   cout << "\nLuasnya adalah: " << lingkaran(jari) << endl;
   cout << "---------------------------------" << endl;

   return 0;
}