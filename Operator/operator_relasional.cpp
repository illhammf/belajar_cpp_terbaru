#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int a = 20, b = 7;

    // Deklarasi variabel
    bool c;

    // Menampilkan nilai
    cout << "Nilai A: " << a << endl;
    cout << "Nilai B: " << b << endl;

    // Nilai besar (>)
    c = a > b;
    cout << "Nilai A > Nilai B: " << c << endl;

    // Nilai kecil (<)
    c = a < b;
    cout << "Nilai A < Nilai B: " << c << endl;

    // Sama dengan (==)
    c = a == b;
    cout << "Nilai A == Nilai B: " << c << endl;

    // Tidak sama dengan (!=)
    c = a != b;
    cout << "Nilai A != Nilai B: " << c << endl;

    // Lebih besar atau sama dengan (>=)
    c = a >= b;
    cout << "Nilai A >= Nilai B: " << c << endl;

    // Lebih kecil atau sama dengan (<=)
    c = a <= b;
    cout << "Nilai A <= Nilai B: " << c << endl;

    return 0;
}