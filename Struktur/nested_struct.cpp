#include <iostream>
using namespace std;

// Definisi struktur alamat
struct Alamat
{
    string jalan;
    string kota;
    string kodepos;
};

// Definisi struktur mahasiswa yang berisi struktur alamat
struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
    // Nested structure
    Alamat alamat;
};

// Fungsi utama
int main()
{
    // Deklarasi dan inisialisasi variabel dari tipe struktur
    Mahasiswa mhs;
    mhs.nama = "Ilham Ganteng";
    mhs.umur = 19;
    mhs.ipk = 3.83;
    mhs.alamat.jalan = "Jl. Gatot Subroto KM.9,5";
    mhs.alamat.kota = "Kabupaten Tangerang";
    mhs.alamat.kodepos = "15810";

    // Akses elemen nested structure
    cout << "----------------------------" << endl;
    cout << " Data Mahasiswa" << endl;
    cout << "----------------------------" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << endl;
    cout << "IPK: " << mhs.ipk << endl;
    cout << "Alamat: " << mhs.alamat.jalan << ", " << mhs.alamat.kota << ", " << mhs.alamat.kodepos << endl;

    return 0;
}