#include <iostream>
using namespace std;

// Definisi fungsi ubahNilai
void ubahNilai(int* p) {
    // Mengubah nilai variabel yang ditunjuk oleh pointer p
    *p = 10;
}

// Fungsi utama
int main() {

    // Deklarasi dan inisialisasi variabel
    int a = 5;
    cout << "Nilai a sebelum dioanggil fungsi: " << a << endl;

    // Memanggil fungsi ubahNilai dengan mengirimkan alamat dari variabel a
    ubahNilai(&a);
    cout << "Nilai a setelah dipanggil fungsi: " << a << endl;

    return 0;
}