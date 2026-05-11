 #include <iostream>
#include <string>
using namespace std;

// Membuat atau Definisi fungsi dengan nama belajar
void belajar(string nama, int umur) {
    cout << "Hai!" << endl;
    cout << "Nama saya " << nama << ", umur saya " << umur << " tahun" << endl;
}

// Fungsi utama
int main() {

    // Memanggil fungsi belajar dengan argumen
    belajar("Ilham", 19);
    belajar("Rafli", 11);

    return 0; 
}