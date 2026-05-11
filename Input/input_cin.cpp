#include <iostream>
using namespace std;

int main() {

    // Deklarasi variabel
    float panjang, lebar, luas;

    cout << "Menghitung Luas Persegi Panjang" << endl;

    // Input
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masuukan lebar: ";
    cin >> lebar;

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil
    cout << "------------------------------" << endl;
    cout << "Luas Persegi Panjang = " << luas << endl;
    cout << "------------------------------" << endl;

    return 0;
}