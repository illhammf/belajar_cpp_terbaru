#include <iostream>
using namespace std;

int main () {

    // Deklarasi dan inisialisasi variabel
    int nilai = 5, faktorial = 1;

    cout << "Nilai dari " << nilai << "! adalah: ";

    // Perulangan dari nilai s.d 1
    for (int i = nilai; i >= 1; i--) {
        // Menghitung faktorial
        faktorial = faktorial * i;
    }

    // Menampilkan hasil faktorial
    cout << faktorial << endl;

    return 0;
}