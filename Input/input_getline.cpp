#include <iostream>
#include <string>
using namespace std;

int main() {

    // Deklarasi variabel
    string nama, tempatLahir, tanggalLahir, agama, jenisKelamin, pekerjaan;
    int usia;

    // Input
    cout << "----------------------------" << endl;
    cout << "BIODATA" << endl;
    cout << "----------------------------" << endl;
    cout << "Masukkan nama: ";
    getline (cin, nama);

    cout << "Masukkan tempat lahir: ";
    getline (cin, tempatLahir);

    cout << "Masukkan Tanggal lahir: ";
    getline (cin, tanggalLahir);

    cout << "Masukkan agama: ";
    getline (cin, agama);

    cout << "Masukkan jenis kelamin: ";
    getline (cin, jenisKelamin);

    cout << "Masukkan pekerjaan: ";
    getline (cin, pekerjaan);

    cout << "Masukkan usia: ";
    cin >> usia;
    
    // Menampilkan biodata
    cout << "----------------------------" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Tempat lahir: " << tempatLahir << endl;
    cout << "Tanggal lahir: " << tanggalLahir << endl;
    cout << "Agama: " << agama << endl;
    cout << "Jenis kelamin: " << jenisKelamin << endl;
    cout << "Pekerjaan: " << pekerjaan << endl;
    cout << "Usia: " << usia << endl;
    cout << "----------------------------" << endl;
}

