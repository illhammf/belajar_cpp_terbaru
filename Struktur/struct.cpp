#include <iostream>
using namespace std;

// Definisi Struktur
struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
};

// Fungsi utama
int main()
{
    // Deklarasi dan inisialisasi variabel dari tipe struktur
    Mahasiswa mhs;
    mhs.nama = "Ilham Firmansyah";
    mhs.umur = 19;
    mhs.ipk = 3.83;

    // Akses elemen struktur
    cout << "-----------------------------" << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "-----------------------------" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "IPK: " << mhs.ipk << endl;

    return 0;
}