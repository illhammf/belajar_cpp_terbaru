#include <iostream>
using namespace std;

// Kelas induk
class Universitas
{
public:
    // Data anggota kelas induk
    string namaUniversitas, alamatUniversitas;

    // Fungsi anggota kelas induk
    void dataUniversitas()
    {
        cout << "------------------------------" << endl;
        cout << "Data Universitas" << endl;
        cout << "Nama Universitas: " << namaUniversitas << endl;
        cout << "Alamat Univeritas: " << alamatUniversitas << endl;
    }
};

// Kelas turunan
class Mahasiswa : public Universitas
{
public:
    // Data anggota kelas turunan
    string nama;
    int umur;
    float ipk;

    // Fungsi anggota kelas turunan
    void dataMahasiswa()
    {
        cout << "------------------------------" << endl;
        cout << "Data Mahasiswa" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "IPK: " << ipk << endl;
    }
};

// Fungsi utama
int main()
{

    // Mmebuat objek dari kelas Mahasiswa
    Mahasiswa mhs;

    // Mengisi data anggota objek
    mhs.namaUniversitas = "Universitas Esa Unggul";
    mhs.alamatUniversitas = "Jakarta Barat";
    mhs.nama = "Ilham Firmansyah";
    mhs.umur = 19;
    mhs.ipk = 3.73;

    // Memanggil fungsi kelas induk
    mhs.dataUniversitas();

    // Memanggil fungsi kelas turunan
    mhs.dataMahasiswa();

    return 0;
}