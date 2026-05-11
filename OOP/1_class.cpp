#include <iostream>
using namespace std;

// Definisi kelas
class Mahasiswa {
    public:

    // Data anggota
    string nama;
    int umur;
    float ipk;

    // Fungsi anggota
    void dataMahasiswa() {
        cout << "----------------------------" << endl;
        cout << "Data Mahasisawa" << endl;
        cout << "----------------------------" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "IPK: " << ipk << endl;
        cout << "----------------------------" << endl;

    }
};

// Fungsi utama
int main() {
    // Membuat objek dari kelas Mahasiswa
    Mahasiswa mhs;

    // Mengisi data anggota objek
    mhs.nama = "Ilham Ganteng";
    mhs.umur = 19;
    mhs.ipk = 3.73;
    
    // Memanggil fungsi anggota
    mhs.dataMahasiswa();

    return 0;
}