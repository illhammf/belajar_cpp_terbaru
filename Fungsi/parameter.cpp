#include <iostream>
#include <string>
using namespace std;

// Membuat atau Definisi fungsi dengan nama belajar
void belajar(string nama, int umur, string alamat, string hobi)
{
    cout << "\n--------------------------------" << endl;
    cout << "Hai!" << endl;
    cout << "Nama saya " << nama << ", umur saya " << umur << " tahun" << endl;
    cout << "Saya tinggal di " << alamat << " dan hobi saya " << hobi << endl;
    cout << "--------------------------------" << endl;
}

// Fungsi utama
int main()
{

    // Memanggil fungsi belajar dengan argumen
    belajar("Ilham", 19, "Kp. Kadu Jaya", "Membaca Buku");
    belajar("Annisa", 21, "Kp. Binong", "Memasak");

    return 0;
}