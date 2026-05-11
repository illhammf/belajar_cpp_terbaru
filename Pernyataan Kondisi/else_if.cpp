#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int usia = 29;

    // Pengecekan kelompok usia manusia
    // Jika usia 0 s.d 14 tahun
    if (usia >= 0 && usia < 15) {
        cout << "Kelompok usia anak-anak" << endl;
    }

    // Jika usia 15 s.d 24 tahun
    else if (usia >= 15 && usia < 25) {
        cout << "Kelompok usia muda" << endl;
    }

    // Jika usia 25 s.d 34 tahun
    else if (usia >= 25 && usia < 35) {
        cout << "Kelompok usia pekerja awal" << endl;
    }

    // Jika usia 35 s.d 44 tahun
    else if (usia >= 35 && usia < 45) {
        cout << "Kelompok usia pra-pensiun" << endl;
    }

    // Jika usia 45 s.d 64 tahun
    else if (usia >= 45 && usia < 65) {
        cout << "Kelompok usia pensiun" << endl;
    }
    // Jika usia 65 tahun ke atas
    else {
        cout << "Kelompok usia lanjut" << endl;
    }

    return 0;
}