#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int angka = 2;

    // Pernyataan switch
    switch (angka) {
        // memilih angka 1
        case 1:
            cout << "Angka adalah 1" << endl;
            break;

        // memilih angka 2
        case 2:
            cout << "Angka adalah 2" << endl;
            break;

        // memilih angka 3
        case 3:
            cout << "Angka adalah 3" << endl;
            break;

        // Memilih angka selain 1, 2, dan 3
        default:
            cout << "Angka tidak diketahui" << endl;
            break;
    }

    return 0;
}