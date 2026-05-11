#include <iostream>
using namespace std;

int main() {

    // Deklarasi dan inisialisasi variabel
    int baris = 3, kolom = 10;

    // Perulangan luar untuk baris
    for (int i = 1; i <= baris; i++) {
        
        // Perulangan dalam untuk kolom
        for (int j = 1; j <= kolom; j++) {
            // Menampilkan bentuk persegi panjang
            cout << "* ";
        }
        cout << endl; // Pindah ke baris berikutnya setelah selesai mencetak kolom
    }
    
    return 0;
}